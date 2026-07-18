#include <stdio.h>
#include <string.h>
#include <openssl/evp.h>
 
// Calcula o SHA-256 de uma string e imprime em hexadecimal
int sha256_hash(const unsigned char *data, size_t data_len,
                 unsigned char *out_hash, unsigned int *out_len) {
    EVP_MD_CTX *ctx = EVP_MD_CTX_new();
    if (!ctx) return 0;
 
    int ok = 1;
    if (EVP_DigestInit_ex(ctx, EVP_sha256(), NULL) != 1) ok = 0;
    if (ok && EVP_DigestUpdate(ctx, data, data_len) != 1) ok = 0;
    if (ok && EVP_DigestFinal_ex(ctx, out_hash, out_len) != 1) ok = 0;
 
    EVP_MD_CTX_free(ctx);
    return ok;
}
 
int main(void) {
    const char *msg = "Ola, mundo!";
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int hash_len;
 
    if (!sha256_hash((const unsigned char *)msg, strlen(msg), hash, &hash_len)) {
        fprintf(stderr, "Erro ao calcular o hash\n");
        return 1;
    }
 
    printf("SHA-256(\"%s\") = ", msg);
    for (unsigned int i = 0; i < hash_len; i++)
        printf("%02x", hash[i]);
    printf("\n");
 
    return 0;
}