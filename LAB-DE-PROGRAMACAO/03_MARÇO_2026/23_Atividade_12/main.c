/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h> 

int main()
{
    float a, b, c;
    
    printf("Informe o valor de A: ");
    scanf("%f", &a);

    if (a == 0) {
           printf("Nao e uma equação do segundo grau.");
    return 0;
    }
    
    printf("Informe o valor de B: ");
    scanf("%f", &b);
    
    printf("Informe o valor de C: ");
    scanf("%f", &c);
    
    float delta = (b * b - (4*a*c));
    
    if (delta<0) {
    printf("A equação não possui raízes reais.");
    return 0;
    }
    
    float x1 = (-b+sqrt(delta))/(2*a);
    float x2 = (-b-sqrt(delta))/(2*a);
    
    if (delta==0) {
        printf("A equação possui apenas uma raiz real: %.2f", x1);
    } else if (delta>0) {
        printf("A equação possui duas raizes reais sendo x1 = %.2f e x2 = %.2f", x1, x2);
    }
    
    
    return 0;
}
