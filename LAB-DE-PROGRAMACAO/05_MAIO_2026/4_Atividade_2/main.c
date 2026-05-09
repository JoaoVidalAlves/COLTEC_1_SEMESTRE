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
    
    int soma_l0=0;
    int soma_l1=0;
    int soma_l2=0;
    int soma_l3=0;

    int linha=0;
        for(int j=0; j<4; j++) {
            soma_l0=soma_l0+matriz[0][j];
        }
        for(int j=0; j<4; j++) {
            soma_l1=soma_l1+matriz[1][j];
        }
        for(int j=0; j<4; j++) {
            soma_l2=soma_l2+matriz[2][j];
        }
        for(int j=0; j<4; j++) {
            soma_l3=soma_l3+matriz[3][j];
        }
    
    printf("\n\n---------IMPRIMINDO AS SOMAS DAS LINHAS---------\n\n");
    printf("Soma da linha 1: %d\n", soma_l0);
    printf("Soma da linha 2: %d\n", soma_l1);
    printf("Soma da linha 3: %d\n", soma_l2);
    printf("Soma da linha 4: %d", soma_l3);
    
    int soma_c0=0;
    int soma_c1=0;
    int soma_c2=0;
    int soma_c3=0;

    int coluna=0;
        for(int i=0; i<4; i++) {
            soma_c0=soma_c0+matriz[i][0];
        }
                for(int i=0; i<4; i++) {
            soma_c1=soma_c1+matriz[i][1];
        }
                for(int i=0; i<4; i++) {
            soma_c2=soma_c2+matriz[i][2];
        }
                for(int i=0; i<4; i++) {
            soma_c3=soma_c3+matriz[i][3];
        }

    
    
    printf("\n\n---------IMPRIMINDO AS SOMAS DAS COLUNAS---------\n\n");
    printf("Soma da linha 1: %d\n", soma_c0);
    printf("Soma da linha 2: %d\n", soma_c1);
    printf("Soma da linha 3: %d\n", soma_c2);
    printf("Soma da linha 4: %d", soma_c3);
    
    return 0;
}
