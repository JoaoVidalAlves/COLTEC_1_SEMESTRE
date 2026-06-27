/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
 srand(time(NULL));
 int matriz[4][4];
 int linha=0;
 int coluna=0;
 
     for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            matriz[i][j]=rand()%10;
        }
     }
     
    printf("Imprimindo a tabela: ");
      for(int i=0; i<4; i++){
          printf("\n");
        for(int j=0; j<4; j++){
            printf("%d\t", matriz[i][j]);
        }
     }
     
    int maior = matriz[0][0]; //Ponto de partida para procurar o maior valor
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha=i;
                coluna=j;
            }
        }
    }
    
    printf("\nO maior valor é %d, está na linha %d e coluna %d", maior, linha+1, coluna+1);
    return 0;
}
 

