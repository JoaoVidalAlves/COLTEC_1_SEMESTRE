/******************************************************************************

Preencher um vetor com 8 números.
Pedir um número ao usuário e informar se ele está no vetor.
Se estiver, mostrar todas as posições onde aparece.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[7];
    srand(time(NULL));
    int num;
    
    for(int i=0; i<8; i++) {
        num=(rand()%10)+1;
        vetor[i]=num;
    }
    printf("IMPRIMINDO VETOR\n");
    for(int i=0; i<8; i++) {
        printf("\tP%d=%d\n",i+1, vetor[i]);
    }
    
    int entrada=0;
    
    printf("Digite um numero inteiro entre 1 e 10: ");
    scanf("%d", &entrada);
    
    if(entrada <1 || entrada >10) {
        printf("Respeito os valores do intervalo");
        return 0;
    }
    
    int contador=0;
    for(int i=0; i<7; i++) {
        if(vetor[i]==entrada) {
            contador+=1;
        }
    }
    printf("O valor digitado foi %d e ele aparece %d vezes nas posições: ", entrada,contador);
    for(int i=0; i<8; i++) {
        if(vetor[i]==entrada) {
            printf("P%d, ",i+1);    
        }
    }

    return 0;
}