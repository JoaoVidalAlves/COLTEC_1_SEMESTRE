/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float distancia, combustivel;
    
    printf("Qual foi a distancia percorrida: ");
    scanf("%f", &distancia);
    printf("Qual foi o consumo de combustivel em litros: ");
    scanf("%f", &combustivel);
    
    printf("O consumo medio do veiculo foi de %.2f litros por KM", combustivel/distancia);

    return 0;
}
