/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char resposta_inicial [2];
    int copos_de_agua=0;
    
    printf("Ja bebeu agua hoje: s/n: ");
    scanf("%s", &resposta_inicial);

    for(; (strcmp(resposta_inicial, "s")==0); copos_de_agua++) {
        printf("Ja bebeu agua hoje: s/n: ");
        scanf("%s", &resposta_inicial);
    }
    
    printf("Voce bebeu %i copo(s) de agua hoje.", copos_de_agua);
    
    return 0;
}