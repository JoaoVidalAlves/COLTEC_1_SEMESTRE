/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int score;
    
    printf("Informe seu score de 0 a 1000: ");
    scanf("%i", &score);
    
    if (score >= 0 && score <= 199) {
        printf("Score em 'Muito ruim'");
    }else if (score >= 200 && score <= 399) {
        printf("Score em 'Ruim'");
    }else if (score >= 400 && score <= 599) {
        printf("Score em 'Regular'");
    }else if (score >= 600 && score <= 799) {
        printf("Score em 'Bom'");    
    }else if (score >= 800 && score <= 1000) {
        printf("Score em 'Excelente'");        
    }else {
        printf("ERRO! Verifique o valor informado e tente novamente."); 
    }

    return 0;
}