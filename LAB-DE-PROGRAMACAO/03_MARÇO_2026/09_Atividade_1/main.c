/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num1 = 0, num2 = 0;
    
    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite outro número: ");
    scanf("%f", &num2);
    
    if (num1 > num2) 
    
    printf("Os números informados foram: %.2f e %.2f e o maior é %.2f", num1, num2, num1);
    
    else if (num1 == num2)
    
    printf("Os números informados foram: %.2f e %.2f e ambos são iguais", num1, num2);
    
    else 
    
    printf("Os números informados foram: %.2f e %.2f e o maior é %.2f", num1, num2, num2);
    
    return 0;
}