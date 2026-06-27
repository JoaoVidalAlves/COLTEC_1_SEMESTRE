/******************************************************************************

Crie um programa que:

Declara uma matriz 4x4 preenchida pelo usuário

Calcula e exibe:

A soma de cada linha
A soma de cada coluna

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[4][4];
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            int numero_inf;
            printf("Digite um numero linha: %d coluna: %d: ", i+1, j+1);
            scanf("%d", &numero_inf);
            matriz[i][j]=numero_inf;
        }
    }
    
    printf("\n---------MATRIZ GERADA---------\n");
    for(int i=0; i<4; i++) {
        printf("\n");
        for(int j=0; j<4; j++) {
            printf("%d\t", matriz[i][j]);
        }
    }
    
    int vetor_soma_l[4]={0};
        
        for(int i=0; i<4; i++) {
            for(int j=0; j<4; j++) {
                vetor_soma_l[i]+=matriz[i][j];
            }
        }
        
    int vetor_soma_c[4]={0};
        
        for(int i=0; i<4; i++) {
            for(int j=0; j<4; j++) {
                vetor_soma_c[j]+=matriz[i][j];
            }
        }
    
    printf("\n\n---------IMPRIMINDO AS SOMAS DAS LINHAS---------\n\n");
    
    for(int i=0; i<4; i++) {
        printf("A soma da linha %d foi de: %d\n", i+1, vetor_soma_l[i]);
    }
    
    printf("\n\n---------IMPRIMINDO AS SOMAS DAS COLUNAS---------\n\n");
    
        for(int i=0; i<4; i++) {
        printf("A soma da coluna %d foi de: %d\n", i+1, vetor_soma_c[i]);
    }
    
    return 0;
}
