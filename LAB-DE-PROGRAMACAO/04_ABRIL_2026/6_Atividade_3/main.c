/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float calcular_potencia (double x, double y) {
    return (pow(x, y));
}


int main()
{
    double x, y;
    
    printf("CALCULAR POTENCIA\n");
    printf("informe a base e a potencial (Ex.: 2 5 = 32): ");
    scanf("%lf %lf", &x, &y);
    
    double resultado= calcular_potencia(x,y);
    
    printf("Resultado da potencia: %2.lf", resultado);

    return 0;
}

/*
double pow(double x, double y)
RETORNA: x elevado a y.
RECEBE: dois valores do tipo double, x e y, em que x será a base e y será o expoente.
*/