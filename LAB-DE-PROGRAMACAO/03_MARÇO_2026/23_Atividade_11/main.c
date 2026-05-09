/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int f_pgmnt; // Forma de pagamento
    
    printf("Qual a forma de pagamento: \n"
    "1 - Dinheiro\n"
    "2 - Cartão de débito\n"
    "3 - Cartão de crédito\n"
    "4 - Pix\n"
    "Selecione: ");

    scanf("%i", &f_pgmnt);
    
    switch (f_pgmnt) {
        case 1:
            printf("Pagamento a vista.");
        break;
        
        case 2:
            printf("Pagamento imediato na conta.");
        break;
        
        case 3:
            printf("Pagamento parcelado possível");
        break;
           
        case 4:
            printf("Pagamento a vista.");
    }
    
    return 0;
}
