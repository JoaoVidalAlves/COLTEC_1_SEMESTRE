/******************************************************************************
Introdução a programação - 1/2026
Aula: Estruturas de Repetição (24/03)

Versão: 1.2

APLICAÇÃO DO FOR PARA OS EXERCICIOS POSSIVEIS.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    
    if (dificuldade >= 1 && dificuldade <=3) {

//SELECIONAR O EXERCICIO DA DIFICULDADE ESCOLHIDA
    
        switch (dificuldade) {
            case 1:
                printf("\n***EXERCICIOS FACEIS***\n");
                printf("\nSelecione o exercicio (1 a 4): ");
                scanf("%i", &exercicio);
                system("clear");
                if (exercicio >= 1 && exercicio <=4) {
                    switch (exercicio) {
                        case 1:
                            printf("EX FACIL - 1\n");
                            for(int de0a100 = 0; de0a100 <= 100; de0a100++) {
                               printf("%i\n", de0a100);
                            }
                            for(int de100a0 =99; de100a0 >= 0; de100a0--) {
                               printf("%i\n", de100a0);
                            }
                                return 0;
                        break;
                        
                        case 2:
                            printf("EX FACIL - 2\n");
                            printf("\nINICIO - MOSTRANDO OS NUMERO PARES DE 0 a 50\n");
                            for(int valor_atual = 0; valor_atual <=50; valor_atual++) {
                                if (valor_atual % 2==0) {
                                    printf("%i\n", valor_atual);
                                }
                            } 
                            return 0;
                        break;
                        
                        case 3:
                            printf("EX FACIL - 3\n");
                            int numero=0;
                            printf("\nQual tabuada deseja 1 a 9 (Um valor fora do intervalo encerra o programa): ");
                            scanf("%i", &numero);
                            
                            for(int multiplicar=1; multiplicar <=10; multiplicar++) {
                                if (numero>=1 && numero <=9) {
                                    printf("%i * %i = %i\n", numero, multiplicar, numero*multiplicar);
                                } else {
                                    printf("\nEncerrado!");
                                    return 0;
                                }
                            }
                        break;
                        
                        case 4:
                            printf("EX FACIL - 4\n");
                            int adicao=1;
                            printf("Mostrando a soma até 100\n");
                           
                            for(int num_inicial=0; num_inicial <=99; num_inicial++) {
                                printf("%i + %i = %i\n", num_inicial, adicao, num_inicial + adicao);
                            }
                            return 0;
                        break;
                    }
                } else {
                    printf("Programa encerrado - Selecione uma opção valida.");
                    return 0;
                }
            break;
            
            case 2:
                printf("\n***EXERCICIOS INTERMEDIARIOS***\n");
                printf("\nSelecione o exercicio (1 a 4): ");
                scanf("%i", &exercicio);
                system("clear");
                if (exercicio >= 1 && exercicio <=4) {
                    switch (exercicio) {
                        case 1:
                            int numero_repeticao;
                            printf("EX INTERMEDIARIO - 1\n");
                            while (numero_repeticao != 0) {
                                printf("Digite um numero (0 encerra o programa): ");
                                scanf("%i", &numero_repeticao);
                            }
                            
                            printf("Programa encerrado.");
                            return 0;
                        break;
                        
                        case 2:
                            float soma = 0;
                            float nota = 0;
                            float contador = 0;
                            printf("EX INTERMEDIARIO - 2\n");
                            do {
                                printf("Digite a nota (-1 encerra e mosta a media): ");
                                scanf("%f", &nota);
                                
                                if (nota != -1) {
                                    contador++;
                                    soma = soma + nota;
                                }
                            }while (nota != -1);
                                
                                if (contador >0) {
                                    printf("\nForam informadas %.0f notas", contador);
                                    printf("\nA soma total foi de: %.0f", soma);
                                    printf("\nA media foi: %.2f", soma/contador);
                                } else {
                                    printf("\nNenhuma nota valida foi digiada.");
                                }
                            return 0;
                        break;
                        
                        case 3:
                    	    int temp = 0;
                            printf("EX INTERMEDIARIO - 3\n");
                    	    
                    	    do {
                    	        printf("Informe a temperatura em graus celcius (temperatura menor ou igual a -1 o programa encerra): ");
                    	        scanf("%i", &temp);
                    
                    	    } while (temp >= 0);
                    	    
                    	    printf("Programa encerrado");
                    
                    	    return 0;
                        break;
                        
                        case 4:
                            srand(time(NULL)); // Faz o gerador aleatorio utilizar o horario do pc como diferencial para gerar os numeros.
                            int numero = rand() % 100;
                            int resposta;
                            printf("EX INTERMEDIARIO - 4\n");
                            printf("Numero inteiro gerado, tente adivinhar: ");
                            scanf("%i", &resposta);
                            //printf("\n%i", numero);
                            
                            while (resposta != numero) {
                                if (resposta < numero) {
                                        printf("Mais: ");
                                        scanf("%i", &resposta);
                                } else {
                                        printf("Menos: ");
                                        scanf("%i", &resposta);
                                } 
                            } 
                            printf("Você acertou!"); 
                            return 0;
                        break;
                         }
                } else {
                    printf("Programa encerrado - Selecione uma opção valida.");
                    return 0;
                }
        
            case 3:
                printf("\n***EXERCICIOS DIFICEIS***\n");
                printf("\nSelecione o exercicio (1 a 3): ");
                scanf("%i", &exercicio);
                system("clear");
                if (exercicio >= 1 && exercicio <=3) {
                    switch (exercicio) {
                        case 1:
                            int multiplo=0;
                            printf("EX DIFICIL - 1\n");
                            
                            printf("Selecione o número em que seus multiplos não serão considerados na soma até 100: ");
                            scanf("%i", &multiplo);
                            
                            if (multiplo == 0 || multiplo == 1) {
                                printf("\nNumero invalido escolha outro diferente de 0 e 1");
                                return 0;
                            }
                            
                            for (int numero =0; numero <=100; numero++) {
                                if (numero % multiplo != 0) {
                                    printf("1 + %i = %i\n", numero, 1 + numero);
                                } else {}
                            }
                            return 0;
                        break;
                        
                        case 2:
                            int valor=0;
                            int contador=0;
                            
                            while (1) {
                                printf("Digite um valor: ");
                                scanf("%i", &valor);
                                
                                if (valor == -1) {
                                    break;
                                } else if (valor == 0) {
                                    continue;
                                }
                                
                                contador++;
                            }
                            
                            printf("\nAo final foram digitador %i valores", contador);
                        
                            return 0;
                        break;
                        
                        case 3:
                            int senha=0;
                            int login=0;
                            int contador_de_tentativas=1;
                            
                            printf("Cadastra sua senha (Utilize apenas numeros): ");
                            scanf("%i", &senha);
                            system("clear");
                            
                            printf("Insira a senha para login: ");
                            scanf("%i", &login);
                            
                            while (contador_de_tentativas != 3) {
                                
                                if (login != senha) {
                                    printf("Senha incorreta tente novamente: ");
                                    contador_de_tentativas++;
                                    scanf("%i", &login);   
                                } else {
                                    printf("Login bem sucedido.");
                                    return 0;
                                }
                            } 
                            printf("Conta bloqueada 3 tentativas incorretas.");
                            return 0;
                        break;
                    } 
                } else {
                    printf("Programa encerrado - Selecione uma opção valida.");
                    return 0;
                }
        }         
    } else {
            printf("Programa encerrado - Selecione uma opção valida.");
            return 0;
        }
}
       
