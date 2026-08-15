#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHA 500
#define MAX_LINHAS 1000

void removerEnter(char* texto)
{
    texto[strcspn(texto, "\n")] = '\0';
}

FILE* abrirArquivo(const char* nomeArquivo)
{
    FILE* arquivo = fopen(nomeArquivo, "r+");

    if (arquivo == NULL)
    {
        arquivo = fopen(nomeArquivo, "w+");
    }

    return arquivo;
}

int carregarLinhas(FILE* arquivo, char linhas[][MAX_LINHA])
{
    int quantidade = 0;

    rewind(arquivo);

    while (quantidade < MAX_LINHAS &&
        fgets(linhas[quantidade], MAX_LINHA, arquivo) != NULL)
    {
        removerEnter(linhas[quantidade]);
        quantidade++;
    }

    return quantidade;
}

void mostrarTexto(char linhas[][MAX_LINHA], int quantidade)
{
    printf("\n========== CONTEUDO ==========\n");

    if (quantidade == 0)
    {
        printf("[Arquivo vazio]\n");
    }
    else
    {
        for (int i = 0; i < quantidade; i++)
        {
            printf("%d | %s\n", i + 1, linhas[i]);
        }
    }

    printf("==============================\n");
}

void adicionarLinha(char linhas[][MAX_LINHA], int* quantidade)
{
    if (*quantidade >= MAX_LINHAS)
    {
        printf("Limite de linhas atingido.\n");
        return;
    }

    printf("Digite o texto: ");

    fgets(linhas[*quantidade], MAX_LINHA, stdin);
    removerEnter(linhas[*quantidade]);

    (*quantidade)++;

    printf("Linha adicionada.\n");
}

void editarLinha(char linhas[][MAX_LINHA], int quantidade)
{
    int numero;

    if (quantidade == 0)
    {
        printf("Nao existem linhas para editar.\n");
        return;
    }

    mostrarTexto(linhas, quantidade);

    printf("\nNumero da linha que deseja editar: ");
    scanf("%d", &numero);
    getchar();

    if (numero < 1 || numero > quantidade)
    {
        printf("Linha invalida.\n");
        return;
    }

    printf("Novo texto: ");

    fgets(linhas[numero - 1], MAX_LINHA, stdin);
    removerEnter(linhas[numero - 1]);

    printf("Linha alterada.\n");
}

void excluirLinha(char linhas[][MAX_LINHA], int* quantidade)
{
    int numero;

    if (*quantidade == 0)
    {
        printf("Nao existem linhas para excluir.\n");
        return;
    }

    mostrarTexto(linhas, *quantidade);

    printf("\nNumero da linha que deseja excluir: ");
    scanf("%d", &numero);
    getchar();

    if (numero < 1 || numero > *quantidade)
    {
        printf("Linha invalida.\n");
        return;
    }

    /*
        Move todas as linhas posteriores
        uma posicao para cima.
    */
    for (int i = numero - 1; i < *quantidade - 1; i++)
    {
        strcpy(linhas[i], linhas[i + 1]);
    }

    (*quantidade)--;

    printf("Linha excluida.\n");
}

void salvarArquivo(
    FILE* arquivo,
    char linhas[][MAX_LINHA],
    int quantidade
)
{
    /*
        Fecha o arquivo atual porque precisamos
        sobrescrever completamente seu conteudo.
    */

    rewind(arquivo);

    /*
        Como estamos usando r+/w+, rewind sozinho
        nao diminui fisicamente o arquivo antigo.

        Neste exemplo vamos reabrir no main usando "w"
        para salvar corretamente.
    */
}

void salvar(const char* nomeArquivo,
    char linhas[][MAX_LINHA],
    int quantidade)
{
    FILE* arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL)
    {
        printf("Erro ao salvar arquivo.\n");
        return;
    }

    for (int i = 0; i < quantidade; i++)
    {
        fprintf(arquivo, "%s\n", linhas[i]);
    }

    fclose(arquivo);

    printf("Arquivo salvo com sucesso.\n");
}

int main()
{
    char nomeArquivo[100];
    char linhas[MAX_LINHAS][MAX_LINHA];

    int quantidade;
    int opcao;

    printf("Nome do arquivo: ");
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    removerEnter(nomeArquivo);

    FILE* arquivo = abrirArquivo(nomeArquivo);

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    quantidade = carregarLinhas(arquivo, linhas);

    fclose(arquivo);

    do
    {
        printf("\n");
        printf("======== EDITOR DE TEXTO ========\n");
        printf("1 - Mostrar texto\n");
        printf("2 - Adicionar linha\n");
        printf("3 - Editar linha\n");
        printf("4 - Excluir linha\n");
        printf("5 - Salvar\n");
        printf("0 - Sair\n");
        printf("=================================\n");

        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            mostrarTexto(linhas, quantidade);
            break;

        case 2:
            adicionarLinha(linhas, &quantidade);
            break;

        case 3:
            editarLinha(linhas, quantidade);
            break;

        case 4:
            excluirLinha(linhas, &quantidade);
            break;

        case 5:
            salvar(nomeArquivo, linhas, quantidade);
            break;

        case 0:
            printf("Encerrando editor...\n");
            break;

        default:
            printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}