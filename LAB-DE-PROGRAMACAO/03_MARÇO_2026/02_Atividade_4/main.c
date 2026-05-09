/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1;
    float n2;
    
    printf("Informe um número: ");
    scanf("%f", &n1);
    
    printf("Informe outro número: ");
    scanf("%f", &n2);
    
    float r = n1 - n2;
    
    printf("A diferença entre %.2f e %.2f é de: %.2f", n1, n2, r);
    
    return 0;
}