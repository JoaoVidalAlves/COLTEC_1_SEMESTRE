/******************************************************************************

Crie um programa que:

Lê 30 números inteiros (entre 1 e 10) digitados pelo usuário

Usa um vetor frequencia[11] (índices de 1 a 10) para contar quantas vezes cada número aparece

Exibe uma tabela de frequência e um pequeno histograma horizontal com 

exemplo de saida:
Num 1: 4 vezes  ****
Num 2: 7 vezes  *******
Num 3: 2 vezes  **

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num_informado;
    int frequencia[11]={0};

    
    for(int contador=0; contador<30; contador++) {
        printf("%d » Informe um numero inteiro de (1 a 10): ",contador+1);
        scanf("%d", &num_informado);
        frequencia[num_informado]+=1;
        if(num_informado<=0 || num_informado>10) {
            contador-=1;
            printf("Digite um numero valido!\n");
            continue;
        }
    }
    
    printf("\nNumeros informados;");
    
    for(int i=1; i<11; i++){
        printf("\nNum %d: %d Vezes",i,frequencia[i]);
        for(int a=0; a<frequencia[i]; a++) {
            printf("*");   
        } 
    }
            
    return 0;
}