/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int idade = 0;

	printf("Digite a idade: ");
	scanf("%i", &idade);

	    if       (idade <=12) {
	        printf("Criança");
	    }else if (idade >=13 && idade <=17) {
	        printf("Adolescente");
	    }else if (idade >=18 && idade <=59) {
 	        printf("Adulto");
	    }else{
	        printf("Idoso");
	    }
	      return 0;
}
