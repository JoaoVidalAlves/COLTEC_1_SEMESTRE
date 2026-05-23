/******************************************************************************

▶ Facil
1. Escreva um programa que faz o cadastro de alunos, baseado nas informacoes de:
    ▶ identidade;
    ▶ nome;
    ▶ nota.
Considere a construcao de um menu de operacoes.

2. Crie um codigo de cadastro de produtos, sendo identificados o codigo do produto, nome e preco. Durante a venda, o programa pode adicionar at ́e 10% de desconto, mostrando ambos valores.

3. Elabore um calendario de datas importantes, sendo considerado um campo de descricao dos motivos da importancia daquela data.

▶ Intermediario
1. Em um sistema escolar, contendo as notas, identificacao e nome dos alunos, e esperado que o programa possa listar todos estudantes aprovados e reprovados.
2. Em um sistema de estoque, considera-se o cadastro de dados como:
    ▶ codigo do produto;
    ▶ nome;
    ▶ quantidade disponıvel, e;
    ▶ preco.
Considere mostrar os itens na ordem crescente de pre ̧co singular por produto ou pelo preco total estocado.

▶ Difıcil
1. Crie um mini-sistema bancario, onde cada conta possui:
    ▶ Numero de conta;
    ▶ Nome do titular;
    ▶ Saldo.
Alem disso, em um menu, considere as operacoes de:
    ▶ Depositar;
    ▶ Sacar, e;
    ▶ Mostrar saldo.

2. Em um sistema simulando uma biblioteca, elabore um sistema que cadastra livros baseado em:
    ▶ id;
    ▶ nome do livro;
    ▶ localizacao;
Alem disso, indique se o livro est ́a disponıvel ou emprestados e, caso emprestado, qual a data de devolucao.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

//DECLARAR PROTOTIPOS DO MENU E ATIVIDADES
void menuFacil();
void menuIntermediario();
void menuDificil();

void atvfacil1();
void atvfacil2();
void atvfacil3();
void atvfacil4();
void atvfacil5();

void atvintermediario1();
void atvintermediario2();
void atvintermediario3();
void atvintermediario4();
void atvintermediario5();

void atvdificil1();
void atvdificil2();
void atvdificil3();
void atvdificil4();
void atvdificil5();

//PROTOTIPO DO MENU
int main() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt-BR");
    int dificuldade=0;

    printf("***EXERCICIOS DE PONTEIROS***\n");
    printf("\nSelecione a dificuldade\n");
    printf("\n");
    printf("1 = FACIL\n");
    printf("2 = INTERMEDIARIO\n");
    printf("3 = DIFICIL\n");
    printf("\nSelecione: ");
    scanf("%i", &dificuldade);

    switch (dificuldade) {
        case 1: {
            menuFacil();
        }
        break;
        case 2: {
            menuIntermediario();
        }
        break;
        case 3: {
            menuDificil();
        }
        break;
        default: {
            printf("Selecione uma dificuldade valida.");
        }
    }

    return 0;
}

//PROTOTIPO DAS DIFICULDADES
void menuFacil() {
    int exercicio=0;
    system(CLEAR_COMMAND);
    printf("\n***EXERCICIOS FACEIS***\n");
    printf("\nSelecione o exercicio (1 a 2): ");
    scanf("%d", &exercicio);
    
    switch (exercicio) {
        case 1: {
            atvfacil1();    
        }
        break;
        case 2: {
            atvfacil2();    
        }
        break;
        /*case 3: {
            atvfacil3();    
        }
        break;
        case 4: {
            atvfacil4();    
        }
        break;
        case 5: {
            atvfacil5();    
        }
        break;
        */
        default : {
            printf("Selecione um exercicio valido");
        }
    }
}

void menuIntermediario() {
    int exercicio=0;
    system(CLEAR_COMMAND);
    printf("\n***EXERCICIOS INTERMEDIARIOS***\n");
    printf("\nSelecione o exercicio (1 a 4): ");
    scanf("%d", &exercicio);
   
    //system(CLEAR_COMMAND);
    
    switch (exercicio) {
        case 1: {
            atvintermediario1();    
        }
        break;
        case 2: {
            atvintermediario2();    
        }
        break;
        case 3: {
            atvintermediario3();    
        }
        break;
        case 4: {
            atvintermediario4();    
        }
        break;
        //case 5: {
        //    atvintermediario5();    
        //}
        //break;
        default : {
            printf("Selecione um exercicio valido");
        }
    }    
}

void menuDificil() {
    int exercicio=0;
    system(CLEAR_COMMAND);
    printf("\n***EXERCICIOS DIFICEIS***\n");
    printf("\nSelecione o exercicio (1 a 2): ");
    scanf("%d", &exercicio);
   
    //system(CLEAR_COMMAND);
    
    switch (exercicio) {
        case 1: {
            atvdificil1();    
        }
        break;
        case 2: {
            atvdificil2();    
        }
        break;
        /*case 3: {
            atvdificil3();    
        }
        break;
        case 4: {
            atvdificil4();    
        }
        break;
        case 5: {
            atvdificil5();    
        }
        break;*/
        default : {
            printf("Selecione um exercicio valido");
        }
    }    
}

void atvfacil1() {
    typdef struct {
        int identidade;
        char nome[50];
        int nota;
    }
        Aluno;

        printf("Digite a quantidade de alunos: ");
        int quantidadeAlunos; 
        scanf("%d", &quantidadeAlunos);
        Aluno alunos[quantidadeAlunos];
        for (int i = 0; i < quantidadeAlunos; i++) {
            printf("Digite a identidade do aluno %d: ", i + 1);
            scanf("%d", &alunos[i].identidade);
            printf("Digite o nome do aluno %d: ", i + 1);
            scanf("%s", alunos[i].nome);
            printf("Digite a nota do aluno %d: ", i + 1);
            scanf("%d", &alunos[i].nota);
        }
        
    
}
void atvfacil2() {

}
void atvfacil3() {

}
void atvfacil4() {

}
void atvfacil5() {

}

void atvintermediario1() {

}
void atvintermediario2() {

}
void atvintermediario3() {   

}
void atvintermediario4() {

}
void atvintermediario5() {

}

void atvdificil1() {

}
void atvdificil2() {

}
void atvdificil3() {

}
void atvdificil4() {

}
void atvdificil5() {

}

