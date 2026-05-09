/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int paradas=2;
    int passageiros=0;
    int total_de_passageiros=0;
    int paradas_com_passageiros=0;
    
    printf("Parada 1, entraram passageiros?\n"
    "Se sim quantos? - Se não digite 0\n"
    "Passageiros: ", paradas);
    scanf("%i", &passageiros);
    total_de_passageiros += passageiros;
    
    if (passageiros > 0) {
        
        while (passageiros >0) {
          
            printf("\nParada %i, entraram passageiros?\n"
            "Se sim quantos? - Se não digite 0\n"
            "Passageiros: ", paradas);
            scanf("%i", &passageiros);
            paradas++;
            total_de_passageiros += passageiros;
            paradas_com_passageiros++;
        }
    printf("\nAo final entraram %i passageiros em %i paradas.\n", total_de_passageiros, paradas_com_passageiros);
    
    } else {
        printf("Não entraram passageiros");  
    }
    
    return 0;
}
