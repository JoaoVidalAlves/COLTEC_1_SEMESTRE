/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor_10_posicoes[10];
    int valor_inserido=0;
    int contador=0;
    
    for(int i=0; i<10; i++) {
        printf("Insira o valor da posição %d: ", i+1);
        scanf("%d", &valor_inserido);
        vetor_10_posicoes[i]=valor_inserido;
    }
    
    for(int d=0; d<=10; d++) {
        if(vetor_10_posicoes[d]%2==0) {
            contador++;
        }
    }
    
    printf("Dentre os valores informados %d são pares.", contador);
    
    return 0;
}