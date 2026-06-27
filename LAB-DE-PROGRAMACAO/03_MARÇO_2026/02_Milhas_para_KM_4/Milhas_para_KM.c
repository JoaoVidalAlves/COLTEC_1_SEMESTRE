/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float M;
    printf("Informe uma distância em milhas: ");
    scanf("%f", &M);
    
    float K = 1.61 * M;
    
    printf("A conversão de %.2f milhas para Kilometros é de: %.2f", M, K);

    return 0;
}
