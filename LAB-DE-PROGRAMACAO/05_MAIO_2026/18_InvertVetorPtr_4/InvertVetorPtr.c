#include <stdio.h>

void InverterVetor(int *vetor) {
    
    for(int i = 0; i < 4; i++) {
        int temp = *(vetor + i);
        *(vetor + i) = *(vetor + (7 - i));
        *(vetor + (7 - i)) = temp;    
    }
}

int main()
{

    int vetor[8];
    int entrada=0;
    
    for(int i = 0; i < 8; i++) {
        printf("Digite o valor para a posição %d: ",i+1);
        scanf("%d", &entrada);
        vetor[i] = entrada;
    }
    
    printf("Antes da inversão\n");
    for(int i = 0; i < 8; i++) {
        printf("P%d = %d\n",i+1,vetor[i]);
    }
    
    InverterVetor(vetor);
    
    printf("\nDepois da inversão\n");
    for(int i = 0; i < 8; i++) {
        printf("P%d = %d\n",i+1,vetor[i]);
    }

    return 0;
}