/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float dinheiro = 0;
    
    printf("Informe um valor em dolar: ");
    scanf("%f", &dinheiro);
    
    printf("A cotação do dolar no dia de hoje (09/03/2026) é R$ 5,21, portanto, a conversão do valor informado para o real é de: R$ %.2f", dinheiro * 5.21);

    return 0;
}
