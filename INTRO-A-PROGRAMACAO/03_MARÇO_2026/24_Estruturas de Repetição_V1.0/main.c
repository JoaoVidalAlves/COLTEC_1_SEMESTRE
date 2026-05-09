/******************************************************************************
Introdução a programação - 1/2026
Aula: Estruturas de Repetição (24/03)

Versão: 1.1

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
//SELECIONAR A DIFICULDADE DOS EXERCICIOS

    int dificuldade, exercicio;    

    printf("***EXERCICIOS DE REPETIÇÃO***\n");
    printf(
    "\nSelecione a dificuldade\n"
    "\n"
    "1 = FACIL\n"
    "2 = INTERMEDIARIO\n"
    "3 = DIFICIL\n"
    "\nSelecione: ");
    scanf("%i", &dificuldade);
    system("clear");

//SELECIONAR O EXERCICIO DA DIFICULDADE ESCOLHIDA
    
    switch (dificuldade) {
        case 1:
            printf("\n***EXERCICIOS FACEIS***\n");
            printf("\nSelecione o exercicio (1 a 4): ");
            scanf("%i", &exercicio);
                system("clear");
                switch (exercicio) {
                    case 1:
                    printf("EX FACIL - 1\n");
                        int de0a100 = 0;
                        int de100a0 = 99;
                        while (de0a100 <= 100) {
                           printf("%i\n", de0a100);
                           de0a100++; 
                        } while (de100a0 >= 0) {
                           printf("%i\n", de100a0);
                           de100a0--; 
                        }
                        return 0;
                    break;
                    
                    case 2:
                    printf("EX FACIL - 2\n");
                        int valor_atual = 0;
                            printf("\nINICIO - MOSTRANDO OS NUMERO PARES DE 0 a 50\n");
                        while (valor_atual <=50) {
                            if ((valor_atual % 2)==0) {
                                printf("%i\n", valor_atual);
                            } valor_atual++;
                        } 
                        return 0;
                    break;
                    
                    case 3:
                    printf("EX FACIL - 3\n");
                        int multiplicar=1;
                        int numero=0;
                            
                        printf("\nQual tabuada deseja 1 a 9 (Um valor fora do intervalo encerra o programa): ");
                        scanf("%i", &numero);
                            
                            
                        while (multiplicar <=10) {
                            if (numero>=1 && numero <=9) {
                                printf("%i * %i = %i\n", numero, multiplicar, numero*multiplicar);
                            } else {
                                printf("\nEncerrado!");
                                return 0;
                            }
                                multiplicar++;
                            }
                            
                            return 0;
                    break;
                    
                    case 4:
                    printf("EX FACIL - 4\n");
                        int num_inicial=0;
                        int adicao=1;
                        
                        printf("Mostrando a soma até 100\n");
                        
                        while (num_inicial <=99) {
                            printf("%i + %i = %i\n", num_inicial, adicao, num_inicial + adicao);
                            num_inicial++;
                        }
                    
                        return 0;
                    break;
    
                }

    }
}