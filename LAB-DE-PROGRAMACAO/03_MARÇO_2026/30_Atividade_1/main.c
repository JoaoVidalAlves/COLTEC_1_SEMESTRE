/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero=0;
    printf("\nQual tabuada deseja 1 a 9 (Um valor fora do intervalo encerra o programa): ");
    scanf("%i", &numero);
                            
    for(int multiplicar=1; multiplicar <=10; multiplicar++) {
        if (numero>=1 && numero <=9) {
            printf("%i * %i = %i\n", numero, multiplicar, numero*multiplicar);
        } else {
            printf("\nEncerrado!");
    return 0;
        }
    }
}