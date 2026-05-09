/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int tempo;
    
    printf("Informe o tempo total (em minutos) de deslocamento: ");
    scanf("%i", &tempo);
    
    if (tempo >= 0 && tempo <= 20) {
        printf("Transito leve");
    }else if (tempo >= 21 && tempo <= 40) {
        printf("Transito moderado");
    }else if (tempo >= 41 && tempo <= 60) {
        printf("Transito pesado");
    }else if (tempo >= 61) {
        printf("Transito muito pesado");    
    }       
       
    return 0;
}

  
