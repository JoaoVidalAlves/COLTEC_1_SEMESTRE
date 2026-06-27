#include <stdio.h>
#include <stdlib.h>

void Trocar(int *a, int *b) {

    int temp = *a; //Temp = ao conteudo apontado por a
    *a = *b; //conteudo apontado por a = ao conteudo apontado por b
    *b = temp; //conteudo apontado por b = valor de temp

}

int main()
{
    int vlr1=0;
    int vlr2=0;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &vlr1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &vlr2);
    
    Trocar(&vlr1, &vlr2);

    printf("N1: %d\nN2: %d", vlr1, vlr2);

    return 0;
}