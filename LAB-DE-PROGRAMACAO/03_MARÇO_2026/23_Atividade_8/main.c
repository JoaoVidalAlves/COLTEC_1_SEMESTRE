/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float consumo;
    float resultado;
    float resultado_final;
    int bandeira;
    
    printf("Informe seu consumo em kWh: ");
    scanf("%f", &consumo);
    
    printf("Informe a bandeira vigente: \n"
    "1 = Bandeira Verde\n"
    "2 = Bandeira Amarela\n"
    "3 = Bandeira Vermelha\n"
    "Selecione: ");
    scanf("%i", &bandeira);
    
    if (consumo <= 100) {
        resultado = 0.60 * consumo;
    }else if (consumo >= 101 && consumo <= 200) {
        resultado = 0.75 * consumo;
    }else if (consumo >= 201 && consumo <= 300) {
        resultado = 0.90 * consumo;
    }else if (consumo >= 301) {
        resultado = 1.20 * consumo;
    }
    
    switch (bandeira) {
        case 1: {
        resultado_final = resultado;
        }
        break;
        
        case 2: {
        resultado_final = resultado + 15;
        }
        break;
        
        case 3: {
        resultado_final = resultado + 3;
        }
        break;
        
        default:
        printf("Nenhuma bandeira informada");
    } 
    
    printf("Seu valor a pagar é de: %.2f", resultado_final);
    
    return 0;
}

