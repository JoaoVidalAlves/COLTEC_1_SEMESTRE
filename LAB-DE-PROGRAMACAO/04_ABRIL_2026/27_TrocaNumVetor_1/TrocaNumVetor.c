/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int vetor_10_elementos [10];
 int valor_inserido=0;
 
 for(int i=0; i<10; i++) {
    printf("Digite o valor a ser inserido na posição %d: ", i+1);
    scanf("%d", &valor_inserido);
    vetor_10_elementos[i]=valor_inserido;
 }
 
 for(int d=9; d>=0; d--) {
    printf("%d\t", vetor_10_elementos[d]);
 }
 
 return 0;
}
