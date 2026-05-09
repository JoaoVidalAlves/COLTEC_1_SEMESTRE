/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
	float velocidade_lida;

	printf("Velocidade lida: ");
	scanf("%f", &velocidade_lida);

	    if       (velocidade_lida <=60) {
	        printf("Dentro do limite");
	    }else if (velocidade_lida >=61 && velocidade_lida <=80) {
	        printf("Acima do limite");
	    }else{
 	        printf("Multa grave!");
	         }
	    
	      return 0;
}

