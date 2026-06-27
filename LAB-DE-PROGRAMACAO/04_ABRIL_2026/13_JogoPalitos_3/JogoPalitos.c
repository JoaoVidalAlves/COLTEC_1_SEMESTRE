/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int palpiteComputador() {
    return rand()% 4;
}

int main() {
    int comp1,comp2,comp3;
    int usuario;
    int palpiteUsuario;
    int soma;
    int rodadas=0, vitorias=0;

while(1) {
    srand(time(NULL));

    comp1 = palpiteComputador();
    comp2 = palpiteComputador();
    comp3 = palpiteComputador();
    
    printf("\nValor fora do escopo encerra.\n");
    printf("Quantos palitos voce vai esconder? (0 a 3): ");
    scanf("%d", &usuario);
    
    if (usuario < 0 || usuario > 3) {
        printf("Encerrado\n");
        printf("\nVocê venceu %d das %d rodadas.", vitorias, rodadas);
        return 0;
    }

    printf("Qual o seu palpite para a soma total? ");
    scanf("%d", &palpiteUsuario);

    soma = usuario + comp1 + comp2 + comp3;

    printf("\n--- Resultado ---\n");
    printf("Voce jogou: %d\n", usuario);
    printf("Computador 1: %d\n", comp1);
    printf("Computador 2: %d\n", comp2);
    printf("Computador 3: %d\n", comp3);
    printf("Soma total: %d\n", soma);

    if (palpiteUsuario == soma) {
        printf("Parabens! Voce ganhou!\n");
        rodadas++;
        vitorias++;
    } else {
        printf("Voce perdeu.\n");
        rodadas++;
    }
}
    return 0;
}