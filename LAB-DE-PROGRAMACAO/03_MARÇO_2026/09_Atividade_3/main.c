/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num1 = 0;
    
    printf("Digite um numero: ");
    scanf("%f", &num1);
    
    if (num1 == 0) {
        printf("0 é um numero neutro");
    } else if (num1 < 0) {
        printf("%.2f é um número negativo", num1);
    } else {
        printf("%.2f é um número positivo", num1); 
    }
    
    return 0;
}
