/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float distancia;
    int horario;
    float valor;
    float valor_final;
    
    printf("Qual a distancia a ser percorrida em KM: ");
    scanf("%f", &distancia);
    
    printf("A que horas do dia a corrida esta sendo solicitada: ");
    scanf("%i", &horario);
    
    // Grava o valor da corrida
    if (distancia <= 5) {
        valor = 10;
    } else if (distancia >=6 && distancia <=10) {
        valor = 20;
    } else if (distancia >=11 && distancia <=20) {
        valor = 30;
    } else if (distancia >=21) {
        valor = 50;
    }
    
    // Acrescenta o adicional pelo horario
    if (horario >=7 && horario <=9) {
        valor_final = valor + (valor*0.20);
    } else if (horario >=17 && horario <=20) {
        valor_final = valor + (valor*0.25);
    } else if (horario >=22 && horario <=23 || horario >=0 && horario <=5) {
        valor_final = valor + (valor*0.30);
    }
    
    printf("O valor a ser pago pela corrida é de: %.2f", valor_final);

    return 0;

}
