/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
#define NAVIOS 5

int main()
{
    int navio_linha=0, navio_coluna=0, linha_ataque=1, coluna_ataque=1;
    int acertos=0;
    int tabela[TAM][TAM]={0}; //AGUA = 0
    int colocados=0;
    srand(time(NULL));
    
    while (colocados<NAVIOS) { //CRIA E ENCAIXA 5 NAVIOS
        navio_linha = rand()%TAM;
        navio_coluna = rand()%TAM;
        if(tabela[navio_linha][navio_coluna]==0) { //SE NA POSIÇÃO ATUAL TIVER AGUA ENCAIXA NAVIO = 1
            tabela[navio_linha][navio_coluna]=1;
            colocados++;
        } else {
            continue;
        }
    }
    
    printf("-----BATALHA NAVAL-----\n");
    
    while (acertos<NAVIOS) {
    
        for(int i=0; i<TAM; i++) { //IMPRIME A TABELA COM OS NAVIOS
            printf("\n");
            for(int j=0; j<TAM; j++) {
                if(tabela[i][j]==0 || tabela[i][j]==1) {
                    printf("~ ");    
                } else if (tabela[i][j]==3) { // INSERE O BARCO AFUNDADO
                    printf("X ");
                } else if (tabela[i][j]==4) { // INSERE O ERRO DO DISPARO
                    printf("O ");
                }
            }
        }
    
        do {
            printf("\nSelecione a linha (1 a 5): ");
            scanf("%d", &linha_ataque);
        
            printf("Selecione a coluna (1 a 5): ");
            scanf("%d", &coluna_ataque);
            
            linha_ataque--;
            coluna_ataque--;
        
            if(linha_ataque < 0 || linha_ataque > 4 || coluna_ataque < 0 || coluna_ataque > 4) {
                printf("Valores inválidos! Digite entre 1 e 5.\n");
                continue;
            }
        
            if (tabela[linha_ataque][coluna_ataque]==4 || tabela[linha_ataque][coluna_ataque]==3) {
                printf("Você ja atacou aqui!\n");
                for(int i=0; i<TAM; i++) { //IMPRIME A TABELA COM OS NAVIOS
                    printf("\n");
                    for(int j=0; j<TAM; j++) {
                        if(tabela[i][j]==0 || tabela[i][j]==1) {
                            printf("~ ");    
                        } else if (tabela[i][j]==3) { // INSERE O BARCO AFUNDADO
                            printf("X ");
                        } else if (tabela[i][j]==4) { // INSERE O ERRO DO DISPARO
                            printf("O ");
                        }
                    }
                }
            } 
            
        } while(linha_ataque < 0 || linha_ataque > 4 || coluna_ataque < 0 || coluna_ataque > 4 || tabela[linha_ataque][coluna_ataque]==4 || tabela[linha_ataque][coluna_ataque]==3);

        if(tabela[linha_ataque][coluna_ataque]==1) {
            printf("Voce acertou!\n");
            tabela[linha_ataque][coluna_ataque]=3; //COLOCA O X
            acertos++;
        } else if (tabela[linha_ataque][coluna_ataque]==3) {
            printf("Você já atacou aqui!\n");
        } else {
            printf("Você errou!\n");
            tabela[linha_ataque][coluna_ataque]=4; //COLOCA AGUA
        }
    
    }
    
    for(int i=0; i<TAM; i++) { //IMPRIME A TABELA COM OS NAVIOS
            printf("\n");
            for(int j=0; j<TAM; j++) {
                if(tabela[i][j]==0 || tabela[i][j]==1) {
                    printf("~ ");    
                } else if (tabela[i][j]==3) { // INSERE O BARCO AFUNDADO
                    printf("X ");
                } else if (tabela[i][j]==4) { // INSERE O ERRO DO DISPARO
                    printf("O ");
                }
            }
        }
    
    printf("\nVocê destruiu todos os navios!!");
    
    return 0;
}