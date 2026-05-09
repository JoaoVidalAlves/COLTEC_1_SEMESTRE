/******************************************************************************

Facil
1. Leia 10 numeros e armazene em um vetor.
2. Mostre todos os valores do vetor.
3. Conte quantos valores são pares.
4. Calcule a media dos valores.
(Juntei os exercicios 1 a 4) do nivel Facil.

5. Leia uma matriz 3x3 e exiba seus elementos.


Intermediario
1. Encontre o maior e o menor valor de um vetor.
2. Conte quantos valores sao positivos e negativos.
3. Inverta a ordem dos elementos de um vetor.
(Juntei os exercicios 1 a 3) do nivel Intermediario.

4. Some os valores da diagonal principal de uma matriz.
5. Some os valores de cada linha de uma matriz.
(Juntei os exercicios 4 a 5) do nivel Intermediario.

Dificil
1. Verifique se um vetor est ́a ordenado.
2. Conte quantos elementos da matriz s ̃ao maiores que um valor informado.
3. Transponha uma matriz.
4. Encontre o maior valor de cada coluna.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
//SELECIONAR A DIFICULDADE DOS EXERCICIOS

    int dificuldade, exercicio;    

    printf("***EXERCICIOS DE VETORES***\n");
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
            case 1: {
                printf("\n***EXERCICIOS FACEIS***\n");
                printf("\nSelecione o exercicio (1 a 2): ");
                scanf("%i", &exercicio);
                system("clear");
                if (exercicio >= 1 && exercicio <=3) {
                    switch (exercicio) {
                        case 1: {
                            int vetor[10]={0};
                            
                            printf("Apenas valores inteiros e positivos!!\n");
                            for(int i=0; i<10; i++) {
                                int valor=0;
                                printf("Digite o valor da posição %d: ", i+1);
                                scanf("%d", &valor);
                                if(valor>=0) {
                                    vetor[i]=valor;
                                } else {
                                    printf("Digite um valor inteiro e positivo.\n");
                                    i--;
                                    continue;
                                }
                            }
                            
                            printf("\nValores inseridos:\n");
                            for(int i=0; i<10; i++) {
                                printf("\nP%d: %d", i+1, vetor[i]);
                            }
                            
                            printf("\n\nValores pares:\n");
                            for(int i=0; i<10; i++) {
                                if(vetor[i]%2==0) {
                                    printf("%d\t", vetor[i]);
                                }
                            }
                            
                            float media=0;
                            printf("\nMedia dos valores:\n");
                            for(int i=0; i<10; i++) {
                                media=media+vetor[i];
                            }
                            printf("A media é %.2f", media/10);

                            return 0;
                        }
                        break;
                            
                        case 2: {
                            int matriz[3][3];
                            for(int i=0; i<3; i++) {
                                for(int j=0; j<3; j++) {
                                    int numero_inf;
                                    printf("Digite um numero linha: %d coluna: %d: ", i+1, j+1);
                                    scanf("%d", &numero_inf);
                                    matriz[i][j]=numero_inf;
                                }
                            }
                                
                            printf("\n---------MATRIZ GERADA---------\n");
                            for(int i=0; i<3; i++) {
                                printf("\n");
                                for(int j=0; j<3; j++) {
                                    printf("%d\t", matriz[i][j]);
                                }
                            }
                                return 0;
                        }
                        break;
                    }
                }
                else {
                    printf("Programa encerrado - Selecione uma opção valida.");
                    return 0;
                }
            }
            case 2: {
                printf("\n***EXERCICIOS INTERMEDIARIOS***\n");
                printf("\nSelecione o exercicio (1 a 2): ");
                scanf("%i", &exercicio);
                system("clear");
                if (exercicio >= 1 && exercicio <=5) {
                    switch (exercicio) {
                        case 1: {
                            srand(time(NULL));
                            int vetor[10];
                            int num;
                            //CRIA O VETOR COM 10 NUMEROS ALEATORIOS
                            for(int i=0; i<10; i++) {
                               num=(rand()%21)-10;
                               vetor[i]=num;
                            }
                            printf("Vetor criado:\n");
                            for(int i=0; i<10; i++) {
                               printf("P%d = %d\n",i+1,vetor[i]);
                            }    
                            //FAZ A LEITURA E INDICA QUAL O MAIOR E MENOR VALOR E APROVEITA TAMBEM PARA IDENTIFICAR A QUANTIDADE DE VALORES POSITIVOS E NEGATIVOS
                            int menor=0;
                            int maior=0;
                            int contador_p=0;
                            int contador_n=0;
                            
                            for(int i=0; i<10; i++) {
                                if(vetor[i]>maior) {
                                    maior=vetor[i];
                                }
                                if(vetor[i]>0) {
                                    contador_p=contador_p+1;
                                }
                            }
                            
                                for(int i=0; i<10; i++) {
                                if(vetor[i]<menor) {
                                    menor=vetor[i];
                                }
                                if(vetor[i]<0) {
                                    contador_n=contador_n+1;
                                }
                            }
                            
                            printf("\nMaior = %d", maior);
                            printf("\nMenor = %d\n", menor);
                            printf("\nQuantidade de positivos = %d", contador_p);
                            printf("\nQuantidade de negativos = %d\n\n", contador_n);
                            
                            int valor_armz=0;
                            
                            //INVERTE A ORDEM DOS INDICES
                            for(int i=0; i<5; i++) {
                                valor_armz=vetor[i];//Guarda os 5 primeiros valores
                                vetor[i]=vetor[9-i];//Inverte o primeiro com o ultimo
                                vetor[9-i]=valor_armz;//Inverte o ultimo com o primeiro
                            }
                            printf("Vetor invertido:\n");
                            for(int i=0; i<10; i++) {
                                printf("P%d = %d\n",i+1,vetor[i]);
                            }
                            return 0;
                        }
                        break;
                        
                        case 2: {
                            int matriz[3][3];
    
                            for(int i=0; i<3; i++) {
                                for(int j=0; j<3; j++) {
                                    int numero_inf;
                                    printf("Digite um numero linha: %d coluna: %d: ", i+1, j+1);
                                    scanf("%d", &numero_inf);
                                    matriz[i][j]=numero_inf;
                                }
                            }
                            
                            printf("\n---------MATRIZ GERADA---------\n");
                            for(int i=0; i<3; i++) {
                                printf("\n");
                                for(int j=0; j<3; j++) {
                                    printf("%d\t", matriz[i][j]);
                                }
                            }
                            
                            int vetor_soma_l[3]={0};
                                
                                for(int i=0; i<3; i++) {
                                    for(int j=0; j<3; j++) {
                                        vetor_soma_l[i]+=matriz[i][j];
                                    }
                                }
                                
                            int vetor_soma_c[3]={0};
                                
                                for(int i=0; i<3; i++) {
                                    for(int j=0; j<3; j++) {
                                        vetor_soma_c[j]+=matriz[i][j];
                                    }
                                }
                                
                            int soma_d=0;
                                
                                for(int i=0; i<3; i++) {
                                    for(int j=0; j<3; j++) {
                                        if(i==j) {
                                            soma_d+=matriz[i][j];   
                                        }
                                    }
                                }
                            
                            printf("\n\n---------IMPRIMINDO AS SOMAS DAS LINHAS---------\n\n");
                            
                            for(int i=0; i<3; i++) {
                                printf("A soma da linha %d foi de: %d\n", i+1, vetor_soma_l[i]);
                            }
                            
                            printf("\n\n---------IMPRIMINDO AS SOMAS DAS COLUNAS---------\n\n");
                            
                            for(int i=0; i<3; i++) {
                                printf("A soma da coluna %d foi de: %d\n", 
                                i+1, vetor_soma_c[i]);
                            }
                            
                            printf("\n\n---------IMPRIMINDO A SOMA DA DIAGONAL PRINCIPAL---------\n\n");
                            // O INDICE DA LINHA PRECISA SER IGUAL AO INDICE DA COLUNA
                                printf("A soma da diagonal principal foi de: %d\n", soma_d);
                            return 0;
                        }
                        break;
                    }
                } else {
                    printf("Programa encerrado - Selecione uma opção valida.");
                    return 0;
                }
            }

            case 3: {
                printf("\n***EXERCICIOS DIFICEIS***\n");
                printf("\nSelecione o exercicio (1 a 4): ");
                scanf("%i", &exercicio);
                system("clear");
                if (exercicio >= 1 && exercicio <=4) {
                    switch (exercicio) {
                        case 1: {
                            int vetor[10], num=0, i=0, crescente=0, decrescente=0;
    
                            printf("Verificando se o vetor esta ordenado.\n");
                            while (i<10) {
                                printf("Digite o valor da posição %d: ", i+1);
                                scanf("%d", &num);
                                vetor[i]=num;
                                i++;
                            }
                                
                            for(int a=0; a<9; a++) {
                                if(vetor[a]<vetor[a+1]) {
                                    crescente+=1;
                                } else if(vetor[a]>vetor[a+1]) {
                                    decrescente+=1;
                                }
                            }
                            if(crescente==9) {
                                printf("O vetor esta em ordem crescente.");
                            } else if (decrescente==9) {
                                printf("O vetor esta em ordem decrescente."); 
                            } else {
                                printf("O vetor não esta ordenado.");
                            }
                            return 0;
                        }
                        break;
                        
                        case 2: {
                            srand(time(NULL));
                            int matriz[4][4]={0};
                            
                            for(int i=0; i<4; i++) {
                                 for(int j=0; j<4; j++) {
                                    int num=(rand()%10)+1;
                                    matriz[i][j]=num;
                                 }
                            }
                            printf("MATRIZ GERADA\n");
                            for(int i=0; i<4; i++) {
                                printf("\n");
                                 for(int j=0; j<4; j++) {
                                    printf("%d\t", matriz[i][j]);
                                 }
                            }
                            
                            int contador=0, entrada=0;
                            printf("\n\nDigite um numero: ");
                            scanf("%d", &entrada);
                            
                            for(int i=0; i<4; i++) {
                                 for(int j=0; j<4; j++) {
                                    if(matriz[i][j]>entrada) {
                                        contador+=1;
                                    }
                                 }
                            }
                            if(contador>=1) {
                                printf("Existem %d maiores que o valor informado", contador);
                            }
                            return 0;      
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
            }
        }         
    } else {
        printf("Programa encerrado - Selecione uma opção valida.");
        return 0;
    }
}
