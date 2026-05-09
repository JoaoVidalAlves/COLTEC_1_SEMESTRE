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
  #define AGUA 0
 #define NAVIO 1
#define ACERTO 2
  #define ERRO 3
int tabela[TAM][TAM]={0};
int tentativas=0;

void imprimir_tab () {
    for(int i=0; i<TAM; i++) {
        printf("\n");
            for(int j=0; j<TAM; j++) {
                if(tabela[i][j]==AGUA || tabela[i][j]==NAVIO) printf("~ ");    
                else if (tabela[i][j]==ACERTO) printf("X ");
                else if (tabela[i][j]==ERRO) printf("O ");
            }
    }
    printf("\n");
}

int main()
{
    int linha_ataque=1, coluna_ataque=1;
    int acertos=0;

    srand(time(NULL));
    
    for (int colocados=0; colocados<NAVIOS; ) {
        int navio_linha = rand()%TAM;
        int navio_coluna = rand()%TAM;
        
        if(tabela[navio_linha][navio_coluna]==AGUA) {
            tabela[navio_linha][navio_coluna]=NAVIO;
            colocados++;
        } else {
            continue;
        }
    }
    
    printf("-----BATALHA NAVAL-----\n");
    printf("\nVocê tem 10 tentativas!");
    
    while (acertos<NAVIOS) {
    
    if(tentativas==10 && acertos < NAVIOS) {
        
        printf("Você esgotou as tentativas!");
        imprimir_tab();
        return 0;
    }
    
    imprimir_tab();
            
            printf("\nSelecione a linha (1 a 5): ");
            scanf("%d", &linha_ataque);
        
            printf("Selecione a coluna (1 a 5): ");
            scanf("%d", &coluna_ataque);
            
            linha_ataque--;
            coluna_ataque--;
        
        //VERIFICAÇÃO
            if(linha_ataque < 0 || linha_ataque >= TAM || coluna_ataque < 0 || coluna_ataque >= TAM) {
                printf("\nValores inválidos! Digite entre 1 e 5.\n");
                continue;
            }
        
            if (tabela[linha_ataque][coluna_ataque]==ACERTO || tabela[linha_ataque][coluna_ataque]==ERRO) {
                printf("\nVocê ja atacou aqui!\n");
                tentativas++;
                continue;
            } 

        //ATAQUE
            if(tabela[linha_ataque][coluna_ataque]==NAVIO) {
                printf("\nVoce acertou!\n");
                tabela[linha_ataque][coluna_ataque]=ACERTO; //COLOCA O X
                acertos++;
                tentativas++;
            } else {
                printf("\nVocê errou!\n");
                tabela[linha_ataque][coluna_ataque]=ERRO; //COLOCA AGUA
                tentativas++;
            }
        
    }
    
    imprimir_tab();
    printf("\nVocê destruiu todos os navios!!");
    return 0;
}