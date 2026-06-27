/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int vetor_10_elementos_1 [10];
 int vetor_10_elementos_2 [10];
 int vetor_intersecao[10] = {0,0,0,0,0,0,0,0,0,0};
 int valor_inseridov1=0;
 int valor_inseridov2=0;
 int posicao=0;
 
 printf("Preenchendo o primeiro vetor\n");
 for(int i=0; i<10; i++) {
    printf("Digite o valor a ser inserido na posição %d: ", i+1);
    scanf("%d", &valor_inseridov1);
    vetor_10_elementos_1[i]=valor_inseridov1;
 }

 printf("\nPreenchendo o segundo vetor\n");
 for(int d=0; d<10; d++) {
    printf("Digite o valor a ser inserido na posição %d: ", d+1);
    scanf("%d", &valor_inseridov2);
    vetor_10_elementos_2[d]=valor_inseridov2;
 }
 
 //Fazendo a intersecao
 for(int c=0; c<10; c++) {
    for(int e=0; e<10; e++) {
        if(vetor_10_elementos_1[c]==vetor_10_elementos_2[e]) {
            vetor_intersecao[c]=vetor_10_elementos_2[e];
        }
    } 

 }
 
 printf("\nImprimindo a intersecao\n");
 for(int d=0; d<10; d++) {
    if(vetor_intersecao[d]!=0) {
        printf("%d\t", vetor_intersecao[d]);
    }
 }
 
 return 0;
 
}


