#include <stdio.h>
#include <stdlib.h>

void VerificarMaior(int *a, int *b) {

    if(*b > *a) {
        int temp = *a;
        *a = *b;
        *b = temp;
    } else {
        return;
    }

}

int main()
{
    int vlr1=0;
    int vlr2=0;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &vlr1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &vlr2);
    
    VerificarMaior(&vlr1, &vlr2);

    printf("N1: %d\nN2: %d", vlr1, vlr2);

    return 0;
}