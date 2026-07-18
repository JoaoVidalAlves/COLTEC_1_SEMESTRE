#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif


int main (void)
{
    srand(time(NULL));

    int temp = 0;

    int vetor[10];

    for(int i = 0; i<10; i++)
    {
        temp = rand()%10;
        vetor[i] = temp;
    }

    int *p = vetor;
    
    for(int i = 0; i<10; i++)
    {
        printf("P%d = %d\n", i+1, *p);
        p++;
    }

    return 0;
}