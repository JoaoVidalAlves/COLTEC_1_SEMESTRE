#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

int soma(int *v, int lg)
{
    int somat = 0;
    
    for(int i = 0; i<lg; i++)
    {
        somat += v[i];
    }

    return somat;
}

int main (void)
{
    srand(time(NULL));

    int temp = 0;

    int vetor[10];

    for(int i = 0; i<10; i++)
    {
        temp = rand()%10;
        vetor[i] = temp;
        printf("%d\n", vetor[i]);
    }

    int tamanho = 0;
    tamanho = sizeof(vetor)/sizeof(vetor[0]);
    
    printf("%d", soma(&vetor, tamanho));

    return 0;
}