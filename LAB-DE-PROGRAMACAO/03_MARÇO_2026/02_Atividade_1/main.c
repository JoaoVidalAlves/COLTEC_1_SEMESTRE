#include <stdio.h>

int main()
{
    float l1;
    
    printf("Informe a largura do quadrado em centimetros: ");
    scanf("%f", &l1);
    
    float r = l1 * l1;
    
    printf("A area do quadrado é de %f centimetros", r);

}
