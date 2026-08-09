#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*--------------------------------------------------------
    Lê um número inteiro dentro do intervalo informado.
---------------------------------------------------------*/
int LerNumero(const char* mensagem, int minimo, int maximo)
{
    char entrada[100];
    char* fim;
    long valor;

    while (1)
    {
        printf("%s", mensagem);

        if (fgets(entrada, sizeof(entrada), stdin) == NULL)
            continue;

        /* Remove o '\n' */
        entrada[strcspn(entrada, "\n")] = '\0';

        /* Converte para número */
        valor = strtol(entrada, &fim, 10);

        /* Verifica se toda a entrada era numérica */
        if (*entrada == '\0' || *fim != '\0')
        {
            printf("Entrada invalida. Digite apenas numeros.\n\n");
            continue;
        }

        /* Verifica intervalo */
        if (valor < minimo || valor > maximo)
        {
            printf("Valor invalido - Min %d, Max %d.\n\n",
                minimo, maximo);
            continue;
        }

        return (int)valor;
    }
}

/*--------------------------------------------------------
    Lê um texto respeitando um tamanho máximo.
---------------------------------------------------------*/
void LerTexto(const char* mensagem, char texto[], int tamanho)
{
    while (1)
    {
        printf("%s", mensagem);

        if (fgets(texto, tamanho, stdin) == NULL)
            continue;

        /* Se encontrou '\n', remove */
        if (strchr(texto, '\n') != NULL)
        {
            texto[strcspn(texto, "\n")] = '\0';
            return;
        }

        /* Buffer não terminou -> usuário digitou mais caracteres */
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        printf("Valor invalido - Max %d caracteres.\n\n",
            tamanho - 1);
    }
}

typedef struct Cadastroalunos 
{
	char Nome[50];
	int Cadastro;
	int Nota;
} Cadastroalunos;

int main()
{
    int totalAlunos = 0;
    int quantidadealunos = 0;

    quantidadealunos = LerNumero("Quantos alunos deseja cadastrar: ", 1, 10);

    totalAlunos = quantidadealunos;

    Cadastroalunos *alunos = malloc(quantidadealunos * sizeof(Cadastroalunos));

    if (alunos == NULL)
    {
        printf("\nErro ao alocar memoria.\n");
        
        return 1;
    }

    for (int i = 0; i < quantidadealunos; i++)
    {
        printf("\nAluno %d\n", i + 1);
        LerTexto("Nome: ", alunos[i].Nome, 50);
        alunos[i].Cadastro = LerNumero("Cadastro: ", 1, 1000000);
        alunos[i].Nota = LerNumero("Nota: ", 0, 100);
    }

    /*
    for (int i = 0; i < quantidadealunos; i++)
    {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: %s\n", alunos[i].Nome);
        printf("Cadastro: %d\n", alunos[i].Cadastro);
        printf("Nota: %d\n", alunos[i].Nota);
    }
    */

    const enum opcoes
    {
        Cadastrar = 1, 
        Notas,
        Media,
        Sair
    };

    const char* menu[] =
    {
        "",
        "Cadastrar",
        "Notas",
        "Media",
        "Sair"
    };

    while (1)
    {

        for (int i = Cadastrar; i <= Sair; i++)
        {
            printf("%d - %s", i, menu[i]);
        }

        int selecionarMenu = 0;
    
        selecionarMenu = LerNumero("\nSelecione: ", 1, 4);
    
        Cadastroalunos* alunosTemp;

        switch (selecionarMenu)
        {
            case Cadastrar:
            {
                int novosalunos = 0;

                novosalunos = LerNumero("\nQuantos alunos incluir: ", 1, 10);
               
                int totalAntigo = totalAlunos;
                
                totalAlunos += novosalunos;

                alunosTemp = realloc(alunos, sizeof(Cadastroalunos) * totalAlunos);

                if (alunosTemp == NULL)
                {
                    printf("\nErro ao realocar memoria.");
                    
                    free(alunos);
                    
                    return 1;
                }

                alunos = alunosTemp;

                for (int i = totalAntigo; i < totalAlunos; i++)
                {
                    printf("\nAluno %d\n", i + 1);
                    LerTexto("Nome: ", alunos[i].Nome, 50);
                    alunos[i].Cadastro = LerNumero("Cadastro: ", 1, 1000);
                    alunos[i].Nota = LerNumero("Nota: ", 0, 100);
                }

                continue;
            }

            case Notas:
            {
                for (int i = 0; i < totalAlunos; i++)
                {
                    printf("Nome: %s\n", alunos[i].Nome);
                    printf("Nota: %d\n", alunos[i].Nota);
                }
                getchar();
              
                continue;
            }

            case Media:
            {
                float media = 0;

                for (int i = 0; i < totalAlunos; i++)
                {
                    media += alunos[i].Nota;
                }

                media /= totalAlunos;

                printf("A media geral foi: %.2f", media);

                continue;
            }

            case Sair:
            {
                free(alunos);
                
                return 0;
            }
            break;

            default:
            {
                printf("Opcao invalida.");
                
                continue;
            }
        }
    }

    getchar();

    free(alunos);

    return 0;
}