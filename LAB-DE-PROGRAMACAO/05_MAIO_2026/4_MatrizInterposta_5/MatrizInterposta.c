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
    int matriz_INT[C][L];
    int i=0;

    for(int a=0; a<L; a++) {
        for(int b=0; b<C; b++) {
            printf("Digite um numero para a posição %d: ", i+1);
            scanf("%d", &matriz_A[a][b]);
            i++;
        }
    }
    printf("MATRIZ INTERPOSTA:\n");
    for(int c=0; c<C; c++) {
        printf("\n");
        for(int b=0; b<L; b++) {
            matriz_INT[c][b] = matriz_A[b][c];
            printf("%d\t", matriz_INT[c][b]);
        }
    }
    return 0;
}