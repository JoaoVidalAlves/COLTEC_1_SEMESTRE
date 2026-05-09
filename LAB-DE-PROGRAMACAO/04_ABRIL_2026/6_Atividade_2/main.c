/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lado_do_quadrado=0;
    int contador_altura=0;
    
    printf("Informe um lado do quadrado de 1 a 20: ");
    scanf("%i", &lado_do_quadrado);

    if(lado_do_quadrado >20) {
        printf("Tente novamente com um valor dentro do intervalo permitido.");
        return 0;
    } else {
        for(; contador_altura<lado_do_quadrado; contador_altura++) {
            printf("\n");
            
            int contador_repeticaoDOcarctere_horizontal=0;
            
            while(contador_repeticaoDOcarctere_horizontal < lado_do_quadrado) {
                printf("*");
                contador_repeticaoDOcarctere_horizontal++;
            }
        }
    }

    return 0;
}

/* 
Enquanto o contador_repeticaoDOcarctere_horizontal for menor que o lado do quadrado
ele imprime '*', quando chega no valor do lado do quadrado ele soma 1 ao contador de altura que so
pode chegar no mesmo valor do lado do quadrado depois imprime uma quebra de linha e reseta o contador_repeticaoDOcarctere_horizontal,
continuando o ciclo até que o contador de altura seja igual ao lado do quadrado
*/