/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade = 0;
    
    printf("Digite sua idade: ");
    scanf("%i", &idade);
    
    if (idade < 18) {
        printf("Você ainda não pode tirar carteira para dirigir");
    } else {
        printf("Você ja pode tirar a carteira para dirigir");
    }
    
    return 0;
}
