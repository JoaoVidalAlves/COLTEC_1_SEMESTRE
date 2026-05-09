/******************************************************************************

Welcome to GDB Online.
  GDB online A is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor_nota_alunos[15];
    float nota_informada=0;
    float soma_geral=0;
    
    for(int i=0; i<15; i++) {
        printf("Informe a nota do aluno %d: ", i+1);
        scanf("%f", &nota_informada);
        vetor_nota_alunos[i]=nota_informada;
        soma_geral += vetor_nota_alunos[i];
    }
    
    printf("A media geral da turma foi de %.2f pontos", soma_geral/15);
    
    return 0;
}