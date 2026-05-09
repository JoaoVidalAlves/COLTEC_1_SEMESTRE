/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main()
{
    int vetor_A[MAX];
    int vetor_B[MAX];
    int vetor_AB[MAX*2]={0};
    int entrada_A=0;
    int entrada_B=0;
    int k=0;
    
    for(int i=0; i<MAX; i++) {
        printf("Digite o valor da posição %d do vetor A: ", i+1);
        scanf("%d", &entrada_A);
        vetor_A[i]=entrada_A;
        system("cls");
        system("clear");
    }
    for(int j=0; j<MAX; j++) {
        printf("Digite o valor da posição %d do vetor B: ", j+1);
        scanf("%d", &entrada_B);
        vetor_B[j]=entrada_B;
        system("cls");
        system("clear");
    }

    while (k<(MAX*2)) {
        for(int a=0; a<MAX; a++) {
            vetor_AB[a]=vetor_A[a];
            k++;
        }
        for(int b=5; b<(MAX*2); b++) {
            vetor_AB[b]=vetor_B[(b-5)];
            k++;
        }
    }
     printf("O vetor AB é: \n");
    for(int ab=0; ab<(MAX*2); ab++) {
        printf("%d\t", vetor_AB[ab]);
        }
        
    return 0;
}
