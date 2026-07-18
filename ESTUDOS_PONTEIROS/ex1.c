#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

void trocar(int *a, int *b)
{
    int temp;
    temp = *a;

    *a = *b;
    *b = temp;

    printf("A = %d\nB = %d",*a,*b);
}

int main (void)
{
    int A=0, B=0;

    printf("Digite o valor de A e B: ");
    scanf("%d %d",&A,&B);

    trocar(&A, &B);
    return 0;
}