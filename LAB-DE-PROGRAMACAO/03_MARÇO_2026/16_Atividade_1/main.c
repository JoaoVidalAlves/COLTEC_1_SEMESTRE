/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   
    float num1, num2;
    char op;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite a operação (+, -, *, /): ");
    scanf("%s", &op);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    
    if (op == '+') {
        printf("%.2f", num1 + num2);
    }else if (op == '-') {
        printf("%.2f", num1 - num2);
    }else if (op == '*') {
        printf("%.2f", num1 * num2); 
    }else if (op == '/') {
        if (num2 == 0) {
            printf("Não é possivel dividir por 0");
        } else {
        printf("%.2f", num1 / num2); 
               }
    }
    
    return 0;
}