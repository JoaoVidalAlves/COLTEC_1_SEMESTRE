/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float ds;
    float pr;
    printf("Insira o desconto em (%%) aplicado ao produto: ");
    scanf("%f", &ds);
    
    printf("Insira o valor do produto sem o desconto: ");
    scanf("%f", &pr);
    
    float r = pr - (pr*(ds/100));
    
    printf("O valor cheio do produto é de %.2f e seu desconto em (%%) foi de %.2f%% sendo pago ao final um montande de: %.2f", pr, ds, r);
    

    return 0;
}
