/******************************************************************************

Faça um programa que leia 5 números inteiros e utilize ponteiros para multiplicar 
cada valor do vetor por 2. Ao final, exiba o vetor atualizado.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void multiplicar(int *vetor) {
    
    for(int i = 0; i < 5; i++) {
        *(vetor + i) = *(vetor + i) * 2;
    }
}

int main()
{
    int vetor[5];
    int entrada = 0;
    
    for(int i = 0; i < 5; i++) {
        printf("Digite o valor para a posição %d: ", i+1);
        scanf("%d", &entrada);
        vetor[i] = entrada;
    }
    
    printf("Antes da multiplicação\n");
    for(int i = 0; i < 5; i++) {
        printf("P%d = %d\n", i+1, vetor[i]);
    }
    
    multiplicar(vetor);

    printf("\nDepois da multiplicação\n");
    for(int i = 0; i < 5; i++) {
        printf("P%d = %d\n", i+1, vetor[i]);
    }

    return 0;
}