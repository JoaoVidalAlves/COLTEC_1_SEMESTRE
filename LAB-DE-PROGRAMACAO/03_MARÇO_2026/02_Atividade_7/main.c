/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    char nome [50];
    int idade;
    int ano;
    
    printf("Qual o seu nome? ");
    scanf("%[^\n]", &nome);
    
    printf("Olá %s quantos anos você fez ou faz esse ano?: ", nome);
    scanf("%i", &idade);
    
    printf("Informe o ano atual: ");
    scanf("%i", &ano);
    
    int r = ano - idade;
    printf("Você nasceu em %i.", r);
    
    return 0;
}
