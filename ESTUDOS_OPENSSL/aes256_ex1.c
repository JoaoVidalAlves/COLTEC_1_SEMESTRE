#include <stdio.h>
#include <string.h>
#include <openssl/evp.h>
#include <openssl/rand.h>
#include <openssl/err.h>
 
#define KEY_LEN 32   // 256 bits
#define IV_LEN  16   // tamanho do bloco AES
 
void handle_errors(void) {
    ERR_print_errors_fp(stderr);
}
 
// Retorna o numero de bytes escritos em out, ou -1 em erro
int aes256_encrypt(const unsigned char *plaintext, int plaintext_len,
                    const unsigned char *key, const unsigned char *iv,
                    unsigned char *out) {
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    if (!ctx) return -1;
 
    int len, out_len;
 
    if (EVP_EncryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, key, iv) != 1)
        { handle_errors(); EVP_CIPHER_CTX_free(ctx); return -1; }
 
    if (EVP_EncryptUpdate(ctx, out, &len, plaintext, plaintext_len) != 1)
        { handle_errors(); EVP_CIPHER_CTX_free(ctx); return -1; }
    out_len = len;
 
    if (EVP_EncryptFinal_ex(ctx, out + len, &len) != 1)
        { handle_errors(); EVP_CIPHER_CTX_free(ctx); return -1; }
    out_len += len;
 
    EVP_CIPHER_CTX_free(ctx);
    return out_len;
}
 
int aes256_decrypt(const unsigned char *ciphertext, int ciphertext_len,
                    const unsigned char *key, const unsigned char *iv,
                    unsigned char *out) {
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    if (!ctx) return -1;
 
    int len, out_len;
 
    if (EVP_DecryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, key, iv) != 1)
        { handle_errors(); EVP_CIPHER_CTX_free(ctx); return -1; }
 
    if (EVP_DecryptUpdate(ctx, out, &len, ciphertext, ciphertext_len) != 1)
        { handle_errors(); EVP_CIPHER_CTX_free(ctx); return -1; }
    out_len = len;
 
    if (EVP_DecryptFinal_ex(ctx, out + len, &len) != 1)
        { handle_errors(); EVP_CIPHER_CTX_free(ctx); return -1; }
    out_len += len;
 
    EVP_CIPHER_CTX_free(ctx);
    return out_len;
}
 
int main(void) {
    const char *msg = "Mensagem secreta protegida com AES-256";
    unsigned char key[KEY_LEN];
    unsigned char iv[IV_LEN];
 
    // Em producao, a chave deve vir de uma fonte segura (ex: derivada de senha
    // com PBKDF2/Argon2, ou gerada e armazenada com um KMS). Aqui geramos so
    // para o exemplo.
    if (RAND_bytes(key, KEY_LEN) != 1 || RAND_bytes(iv, IV_LEN) != 1) {
        fprintf(stderr, "Erro ao gerar chave/IV\n");
        return 1;
    }
 
    unsigned char ciphertext[256];
    int ciphertext_len = aes256_encrypt((unsigned char *)msg, strlen(msg),
                                         key, iv, ciphertext);
    if (ciphertext_len < 0) return 1;
 
    printf("Texto cifrado (hex): ");
    for (int i = 0; i < ciphertext_len; i++) printf("%02x", ciphertext[i]);
    printf("\n");
 
    unsigned char decrypted[256];
    int decrypted_len = aes256_decrypt(ciphertext, ciphertext_len, key, iv, decrypted);
    if (decrypted_len < 0) return 1;
    decrypted[decrypted_len] = '\0';
 
    printf("Texto decifrado: %s\n", decrypted);
 
    return 0;
}