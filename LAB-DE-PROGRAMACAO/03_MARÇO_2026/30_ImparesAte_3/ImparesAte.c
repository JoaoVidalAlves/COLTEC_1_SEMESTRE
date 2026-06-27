/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("\nINICIO - MOSTRANDO OS NUMERO IMPARES DE 0 a 50\n");
    
    for(int valor_atual = 0; valor_atual <=50; valor_atual++) {
        if (valor_atual % 2>0) {
            printf("%i\n", valor_atual);
        }
    } 
}