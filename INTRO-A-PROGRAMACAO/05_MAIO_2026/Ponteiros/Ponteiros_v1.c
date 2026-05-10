/******************************************************************************

▶ Facil
1. Aloque uma quantidade de 10 valores em um vetor.
2. Crie uma funcao que mostra os valores de um vetor;
3. Criar uma funcao de calculadora com todas as operacoes basicas.

▶ Intermediario
1. Criar uma funçao que armazena as notas introduzidas de forma dinamicas. Considere tambem uma funçao para mostrar todas as notas incluıdas e que calcula a media.
2. Criar uma funcao que leia varios numeros de modo dinamico e possibilite alterar algum dos numeros.
3. Aloque uma matriz dinamica de tamanho informado pelo usuario.
4. Criar um sistema de agenda com strings dinamicas de ate 50 caracteres.

▶ Difıcil
1. A partir de uma matriz dinamica, iniciada com zero, possibilite a alocacao de valores
em posicoes especıficas. Nao aloque memoria nas posicoes de interesse.
2. Crie um vetor que vai empilhando n ́umeros. Duas opera ̧c ̃oes s ̃ao poss ́ıveis:
    Adicionar um novo n ́umero na pilha, ou;
    Remover o  ́ultimo n ́umero empilhado.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

int main()
{
//SELECIONAR A DIFICULDADE DOS EXERCICIOS

    int dificuldade, exercicio;    

    printf("***EXERCICIOS DE PONTEIROS***\n");
    printf(
    "\nSelecione a dificuldade\n"
    "\n"
    "1 = FACIL\n"
    "2 = INTERMEDIARIO\n"
    "3 = DIFICIL\n"
    "\nSelecione: ");
    scanf("%i", &dificuldade);
    system(CLEAR_COMMAND);
    
    if (dificuldade >= 1 && dificuldade <=3) {

//SELECIONAR O EXERCICIO DA DIFICULDADE ESCOLHIDA
    
        switch (dificuldade) {
            case 1: {
                printf("\n***EXERCICIOS FACEIS***\n");
                printf("\nSelecione o exercicio (1 a 3): ");
                scanf("%i", &exercicio);
                system(CLEAR_COMMAND);
                if (exercicio >= 1 && exercicio <=3) {
                    switch (exercicio) {
                        case 1: {
                       
                        }
                        break;
                            
                        case 2: {

                        }
                        break;

                        case 3: {

                        }
                        break;
                    }
                }
                else {
                    printf("Programa encerrado - Selecione uma opção valida.");
                    return 0;
                }
                break;
            }
            case 2: {
                printf("\n***EXERCICIOS INTERMEDIARIOS***\n");
                printf("\nSelecione o exercicio (1 a 4): ");
                scanf("%i", &exercicio);
                system(CLEAR_COMMAND);
                if (exercicio >= 1 && exercicio <=4) {
                    switch (exercicio) {
                        case 1: {

                        }
                        break;
                        
                        case 2: {

                        }
                        break;

                        case 3: {

                        }
                        break;
                        
                        case 4: {

                        }
                        break;
                    }
                } else {
                    printf("Programa encerrado - Selecione uma opção valida.");
                    return 0;
                }
                break;
            }
            case 3: {
                printf("\n***EXERCICIOS DIFICEIS***\n");
                printf("\nSelecione o exercicio (1 a 2): ");
                scanf("%i", &exercicio);
                system(CLEAR_COMMAND);
                if (exercicio >= 1 && exercicio <=2) {
                    switch (exercicio) {
                        case 1: {

                        }
                        break;
                        
                        case 2: {

                        }
                        break;
                    } 
                } else {
                    printf("Programa encerrado - Selecione uma opção valida.");
                    return 0;
                }
                break;
            }
        }         
    } else {
        printf("Programa encerrado - Selecione uma opção valida.");
        return 0;
    }
}
