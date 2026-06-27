/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int premio = 5000;
   float pessoa1, pessoa2;
    
    printf("Qual percentual do premio a ser dividido para a primeira pessoa: ");
    scanf("%f", &pessoa1);
    printf("Qual percentual do premio a ser dividido para a segunda pessoa (Restam %.2f%): ", 100-pessoa1);
    scanf("%f", &pessoa2);
    
    float pessoa3 = 100-pessoa1-pessoa2;
    printf("A terceira pessoa ficou com os ultimos %.2f%: \n", pessoa3);
    
    printf("PESSOA 1 RECEBE R$ %.2f\n", premio*(pessoa1/100));
    printf("PESSOA 2 RECEBE R$ %.2f\n", premio*(pessoa2/100));
    printf("PESSOA 3 RECEBE R$ %.2f", premio*(pessoa3/100));
   
   return 0;
}
