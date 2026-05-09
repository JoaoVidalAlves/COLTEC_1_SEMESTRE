/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n100=1.2;
    float n101=1.3;
    float n102=1.5;
    float n103=1.2;
    float n104=1.7;
    float n105=2.2;
    float n106=1;
    float qtde=0;
    float codigo;
    
    printf(
        
    "O cardápio:                     \n"
    "                                \n"
    "Especificação   | Cod.|  Preço  \n"
    "--------------------------------\n"
    "Cachorro Quente | 100 | R$ 1.20 \n"
    "Bauru Simples   | 101 | R$ 1.30 \n"
    "Bauru com Ovo   | 102 | R$ 1.50 \n"
    "Hamburguer      | 103 | R$ 1.20 \n"
    "Cheeseburguer   | 104 | R$ 1.70 \n"
    "Suco            | 105 | R$ 2.20 \n"
    "Refrigerante    | 106 | R$ 1.00 \n"
    
          );
    printf("\nQual vai ser? (Digite o codigo): ");
    scanf("%f", &codigo);
    
    printf("Insira a quantidade: ");
    scanf("%f", &qtde);
    
    if       (codigo == 100) {
        printf("Deu um total de R$ %.2f", n100 * qtde);
    }else if (codigo == 101) {
        printf("Deu um total de R$ %.2f", n101 * qtde);
    }else if (codigo == 102) {
        printf("Deu um total de R$ %.2f", n102 * qtde);
    }else if (codigo == 103) {
        printf("Deu um total de R$ %.2f", n103 * qtde);
    }else if (codigo == 104) {
        printf("Deu um total de R$ %.2f", n104 * qtde);
    }else if (codigo == 105) {
        printf("Deu um total de R$ %.2f", n105 * qtde);
    }else if (codigo == 106) {
        printf("Deu um total de R$ %.2f", n106 * qtde);
    }else{
        printf("ERRO - NENHUM PRODUTO SELECIONADO");
         }
    return 0;
}
