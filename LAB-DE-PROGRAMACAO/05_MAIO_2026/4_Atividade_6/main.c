#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 3

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

int main() {
    int matriz_A[L][C];
    int matriz_B[L][C];
    int matriz_AB[L][C];

    for(int a=0; a<L; a++) {
        for(int b=0; b<C; b++) {
            printf("Digite um numero para a posição %d da matriz A: ", (a*C)+b+1);
            scanf("%d", &matriz_A[a][b]);
        }
    }
    for(int a=0; a<L; a++) {
        for(int b=0; b<C; b++) {
            printf("Digite um numero para a posição %d da matriz B: ", (a*C)+b+1);
            scanf("%d", &matriz_B[a][b]);
        }
    }
    printf("MATRIZ A:\n");
    for(int a=0; a<L; a++) {
        printf("\n");
        for(int b=0; b<C; b++) {
            printf("%d\t", matriz_A[a][b]);
        }
    }
    printf("\nMATRIZ B:\n");
    for(int a=0; a<L; a++) {
        printf("\n");
        for(int b=0; b<C; b++) {
            printf("%d\t", matriz_B[a][b]);
        }
    }
    printf("\nMATRIZ AB:\n");
    for(int a=0; a<L; a++) {
        printf("\n");
        for(int b=0; b<C; b++) {
            matriz_AB[a][b] = matriz_A[a][b] + matriz_B[a][b];
            printf("%d\t", matriz_AB[a][b]);
        }
    }
    return 0;
}