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
 int matriz[5][5];
 int numeros_usados[100]={0};
 int num;
 
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            num = rand() % 100;
            while(numeros_usados[num] == 1) {
                num = rand() % 100;
            }
            numeros_usados[num] = 1;
            matriz[i][j] = num;
        }
    }    
    
    printf("Imprimindo a tabela de bingo: ");
      for(int i=0; i<5; i++){
          printf("\n");
        for(int j=0; j<5; j++){
            printf("%d\t", matriz[i][j]);
        }
     }
    return 0;
}
     
 
