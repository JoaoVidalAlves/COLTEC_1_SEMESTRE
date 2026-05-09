/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num_limite=0;
    int num_inicial=0;
    int ultimo_resultado=0;
    
    printf("Digite o valor em que a soma deve parar: ");
    scanf("%i", &num_limite);
    
    printf("Mostrando a soma até: %i\n", num_limite);
    
    while (ultimo_resultado!=num_limite) {
        ultimo_resultado=num_inicial + 1;
        printf("%i + %i = %i\n", num_inicial, 1, num_inicial + 1);
        num_inicial++;
    }
    return 0;
}
    