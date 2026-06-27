/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Moeda () {
    srand(time(NULL));
    int sorteio = rand()%2;
    return sorteio;
}

int main()
{
    int escolha_usuario=3;
    int contador=0;
    int rodadas_ganhas=0;
    int rodadas_perdidas=0;
    
    do {
        int sorteio=Moeda();
        printf("\nEscolha:\n");
        printf("cara = 0\n");
        printf("Coroa = 1\n");
        printf("Selecione ou digite qualquer outro digito para sair: ");
        scanf("%d", &escolha_usuario);
        fflush(stdin);
        contador++;
        
        if(escolha_usuario==sorteio) {
            printf("Você acertou!\n");
            printf("Resultado: %d\n", sorteio);
            rodadas_ganhas++;
        } else {
            printf("Você errou!\n");
            printf("Resultado: %d\n", sorteio);
            rodadas_perdidas++;
        }
        
    } while (contador!=3);
    
    printf("\nRodadas ganhas: %d\n", rodadas_ganhas);
    printf("Rodadas perdidas: %d\n", rodadas_perdidas);
    
    return 0;
}