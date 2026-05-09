/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
    int x = rand() % (6) + 1;
    return x;
}

int main()
{
    srand(time(NULL));
    int girar_ou_nao=0;
    printf("Digite 1 para girar o dado e 0 para sair: ");
    scanf("%i", &girar_ou_nao);
            
    if(girar_ou_nao == 1) {
        printf("O dado caiu em: %i", dado());
    } else {
        printf("Encerrado!");
        return 0;
    }
    
    

    return 0;
}
