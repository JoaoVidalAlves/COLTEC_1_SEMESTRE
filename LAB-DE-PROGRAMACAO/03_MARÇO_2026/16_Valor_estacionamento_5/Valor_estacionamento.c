/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
	float tempo;

	printf("Tempo de permanencia no estacionamento em horas: ");
	scanf("%f", &tempo);

	    if       (tempo <=1) {
	        printf("Valor a ser pago R$ 5.00");
	    }else if (tempo >=1.01 && tempo <=3) {
	        printf("Valor a ser pago R$ 10.00");
	    }else{
 	        printf("Valor a ser pago R$ 15.00");
	         }
	    
	      return 0;
}