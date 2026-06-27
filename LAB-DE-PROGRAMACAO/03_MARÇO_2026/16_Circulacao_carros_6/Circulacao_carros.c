/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int placa;
    
        printf("Insira o ultimo digito da placa do seu veiculo: ");
        scanf("%i", &placa);
    
    if (placa == 1 || placa == 3) {
        printf("Você so pode circular as segundas-feiras.");
    }else if (placa == 3 || placa == 4) {
        printf("Você so pode circular as terças-feiras.");
    }else if (placa == 5 || placa == 6) {
        printf("Você so pode circular as quartas-feiras.");
    }else if (placa == 7 || placa == 8) {
        printf("Você so pode circular as quintas-feiras.");
    }else{
        printf("Você so pode circular as sextas-feiras.");
         }
    return 0;
}
