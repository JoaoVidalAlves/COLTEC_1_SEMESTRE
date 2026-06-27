/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PedraPapelTesoura () {
    srand(time(NULL));
    int escolha = rand()%3;
    return escolha;
}

int main()
{
    int escolha_usuario=3;
    
    printf("Escolha:\n");
    printf("Pedra = 0\n");
    printf("Papel = 1\n");
    printf("Tesoura = 2\n");
    printf("Selecione ou digite qualquer outro digito para sair: ");
    scanf("%d", &escolha_usuario);
    
    int escolha_maquina=PedraPapelTesoura();
    
    if(escolha_maquina==0 && escolha_usuario==0) {
        printf("Empate!\n");
        printf("Você e o computador escolheram - Pedra");
    } else if (escolha_maquina==1 && escolha_usuario==1) {
        printf("Empate!\n");
        printf("Você e o computador escolheram - Papel");
    } else if (escolha_maquina==2 && escolha_usuario==2) {
        printf("Empate!\n");
        printf("Você e o computador escolheram - Tesoura");
    } else if (escolha_maquina==0 && escolha_usuario==2 || escolha_maquina==1 && escolha_usuario==0 || escolha_maquina==2 && escolha_usuario==1) {
        printf("computador venceu!\n");
        printf("Você = %d\nComputador = %d", escolha_usuario, escolha_maquina);
    } else if (escolha_usuario==0 && escolha_maquina==2 || escolha_usuario==1 && escolha_maquina==0 || escolha_usuario==2 && escolha_maquina==1) {
        printf("computador venceu!\n");
        printf("Você = %d\nComputador = %d", escolha_usuario, escolha_maquina);
    } else {
        printf("Encerrado!");
        return 0;
    }
    
    return 0;
}
