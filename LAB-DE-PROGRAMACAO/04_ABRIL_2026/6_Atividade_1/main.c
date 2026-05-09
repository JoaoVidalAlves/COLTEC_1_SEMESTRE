/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL)); // Pega o horario atual do sistema para gerar um numero.
    int numero_aleatorio = rand() % 21;
    int resposta;
    
    printf("Numero inteiro gerado, tente adivinhar: ");
    scanf("%i", &resposta);
    //printf("\n%i", numero);
                
    while (resposta != numero_aleatorio) {
        if (resposta < numero_aleatorio) {
            printf("Mais: ");
            scanf("%i", &resposta);
        } else {
            printf("Menos: ");
            scanf("%i", &resposta);
        } 
    } 
    printf("Você acertou!"); 
}