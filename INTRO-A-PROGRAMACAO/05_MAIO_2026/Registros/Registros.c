/******************************************************************************

▶ Facil
1. Escreva um programa que faz o cadastro de alunos, baseado nas informacoes de:
    ▶ identidade;
    ▶ nome;
    ▶ nota. Considere a construcao de um menu de operacoes.
2. Crie um codigo de cadastro de produtos, sendo identificados o codigo do produto, nome e preco. Durante a venda, o programa pode adicionar ate 10% de desconto, mostrando ambos valores.
3. Elabore um calendario de datas importantes, sendo considerado um campo de descricao dos motivos da importancia daquela data.

▶ Intermediario
1. Em um sistema escolar, contendo as notas, identificacao e nome dos alunos, e esperado que o programa possa listar todos estudantes aprovados e reprovados.
2. Em um sistema de estoque, considera-se o cadastro de dados como:
    ▶ codigo do produto;
    ▶ nome;
    ▶ quantidade disponıvel, e;
    ▶ preco.
Considere mostrar os itens na ordem crescente de pre ̧cosingular por produto ou pelo preco total estocado.

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
    printf("\nSelecione o exercicio (1 a 3): ");
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
        case 3: {
            atvfacil3();    
        }
        break;
        /*
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
    printf("\nSelecione o exercicio (1 a 2): ");
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
        /*
        case 3: {
            atvintermediario3();    
        }
        break;
        case 4: {
            atvintermediario4();    
        }
        break;
        case 5: {
            atvintermediario5();    
        }
        break;
        */
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
    typedef struct cadastroAluno {
        int identidade;
        char nome[50];
        int nota;
    }cadastroAluno;

    int quantidadeAlunos=0;
    printf("Digite a quantidade de alunos a serem cadastrados: ");
    scanf("%d", &quantidadeAlunos);
    if(quantidadeAlunos <= 0) {
        printf("Quantidade de alunos deve ser maior que zero.");
        return;
    }
    system(CLEAR_COMMAND);

    cadastroAluno alunos[quantidadeAlunos];

    printf("Digite os dados dos alunos:\n");
    for(int i=0; i<quantidadeAlunos; i++) {
        printf("Aluno %d:\n", i+1);
        
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Identidade: ");
        scanf("%d", &alunos[i].identidade);
        
        printf("Nota (0 a 100): ");
        scanf("%d", &alunos[i].nota);
        if(alunos[i].nota < 0 || alunos[i].nota > 100) {
            printf("Nota deve ser entre 0 e 100. Tente novamente.\n");
            i--; // Volta para o mesmo aluno
            continue;
        }
        system(CLEAR_COMMAND);
    }

    printf("\nAlunos cadastrados:\n");
    for(int i=0; i<quantidadeAlunos; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Identidade: %d\n", alunos[i].identidade);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota: %d\n\n", alunos[i].nota);
    }

    printf("Deseja calcular a media das notas? (1 para sim, 0 para nao): ");
    int calcularMedia=0;
    scanf("%d", &calcularMedia);
    if(calcularMedia == 1) {
        float somaNotas=0;
        for(int i=0; i<quantidadeAlunos; i++) {
            somaNotas += alunos[i].nota;
        }
        float media = somaNotas / quantidadeAlunos;
        printf("A media das notas dos alunos e: %.2f\n", media);
    } else {
        printf("Calculo da media das notas foi ignorado.\n");
    }
return;
}
void atvfacil2() {
        typedef struct cadastroProduto {
            int codigo;
            char nome[50];
            float preco;
        }cadastroProduto;
    
        int quantidadeProdutos=0;
        printf("Digite a quantidade de produtos a serem cadastrados: ");
        scanf("%d", &quantidadeProdutos);
        if(quantidadeProdutos <= 0) {
            printf("Quantidade de produtos deve ser maior que zero.");
            return;
        }
        system(CLEAR_COMMAND);
    
        cadastroProduto produtos[quantidadeProdutos];
    
        printf("Digite os dados dos produtos:\n");
        for(int i=0; i<quantidadeProdutos; i++) {
            printf("Produto %d:\n", i+1);
            
            printf("Nome: ");
            scanf(" %[^\n]", produtos[i].nome);
    
            printf("Codigo: ");
            scanf("%d", &produtos[i].codigo);
            
            printf("Preco: ");
            scanf("%f", &produtos[i].preco);
            if(produtos[i].preco < 0) {
                printf("Preco deve ser maior ou igual a zero. Tente novamente.\n");
                i--; // Volta para o mesmo produto
                continue;
            }
            system(CLEAR_COMMAND);
        }
    
        printf("\nProdutos cadastrados:\n");
        for(int i=0; i<quantidadeProdutos; i++) {
            printf("Produto %d:\n", i+1);
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Preco: %.2f\n\n", produtos[i].preco);
        }
    
        printf("Deseja aplicar desconto de 10%% nos produtos? (1 para sim, 0 para nao): ");
        int aplicarDesconto=0;
        scanf("%d", &aplicarDesconto);
        if(aplicarDesconto == 1) {
            printf("\nProdutos com desconto aplicado:\n");
            for(int i=0; i<quantidadeProdutos; i++) {
                float precoComDesconto = produtos[i].preco * 0.9; // Aplica desconto de 10%
                printf("Produto %d:\n", i+1);
                printf("Codigo: %d\n", produtos[i].codigo);
                printf("Nome: %s\n", produtos[i].nome);
                printf("Preco original: %.2f\n", produtos[i].preco);
                printf("Preco com desconto: %.2f\n\n", precoComDesconto);
            }
        } else {
            printf("Aplicacao do desconto foi ignorada.\n");
        }
    return;
}
void atvfacil3() {
        typedef struct calendario {
            char data[20];
            char descricao[100];
        }calendario;
    
        int quantidadeDatas=0;
        printf("Digite a quantidade de datas importantes a serem cadastradas: ");
        scanf("%d", &quantidadeDatas);
        if(quantidadeDatas <= 0) {
            printf("Quantidade de datas deve ser maior que zero.");
            return;
        }
        system(CLEAR_COMMAND);
    
        calendario datas[quantidadeDatas];
    
        printf("Digite os dados das datas importantes:\n");
        for(int i=0; i<quantidadeDatas; i++) {
            printf("Data %d:\n", i+1);
            
            printf("Data (dd/mm/aaaa): ");
            scanf(" %[^\n]", datas[i].data);
    
            printf("Descricao: ");
            scanf(" %[^\n]", datas[i].descricao);
            
            system(CLEAR_COMMAND);
        }
    
        printf("\nDatas importantes cadastradas:\n");
        for(int i=0; i<quantidadeDatas; i++) {
            printf("Data %d:\n", i+1);
            printf("Data: %s\n", datas[i].data);
            printf("Descricao: %s\n\n", datas[i].descricao);
        }
}
void atvfacil4() {

}
void atvfacil5() {

}

void atvintermediario1() {
    typedef struct cadastroAluno {
        int identidade;
        char nome[50];
        int nota;
    }cadastroAluno;

    int quantidadeAlunos=0;
    printf("Digite a quantidade de alunos a serem cadastrados: ");
    scanf("%d", &quantidadeAlunos);
    if(quantidadeAlunos <= 0) {
        printf("Quantidade de alunos deve ser maior que zero.");
        return;
    }
    system(CLEAR_COMMAND);

    cadastroAluno alunos[quantidadeAlunos];

    printf("Digite os dados dos alunos:\n");
    for(int i=0; i<quantidadeAlunos; i++) {
        printf("Aluno %d:\n", i+1);
        
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Identidade: ");
        scanf("%d", &alunos[i].identidade);
        
        printf("Nota (0 a 100): ");
        scanf("%d", &alunos[i].nota);
        if(alunos[i].nota < 0 || alunos[i].nota > 100) {
            printf("Nota deve ser entre 0 e 100. Tente novamente.\n");
            i--; // Volta para o mesmo aluno
            continue;
        }
        system(CLEAR_COMMAND);
    }

    printf("\nAlunos cadastrados:\n");
    for(int i=0; i<quantidadeAlunos; i++) {
        printf("Aluno %d:\n", i+1);
        printf("Identidade: %d\n", alunos[i].identidade);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota: %d\n\n", alunos[i].nota);
    }

    printf("Deseja mostrar os alunos aprovados e reprovados? (1 para sim, 0 para nao): ");
    int mostrarAprovadosReprovados=0;
    scanf("%d", &mostrarAprovadosReprovados);
    if(mostrarAprovadosReprovados == 1) {
        printf("\nAlunos aprovados:\n");
        for(int i=0; i<quantidadeAlunos; i++) {
            if(alunos[i].nota >= 60) {
                printf("Aluno %d:\n", i+1);
                printf("Identidade: %d\n", alunos[i].identidade);
                printf("Nome: %s\n", alunos[i].nome);
                printf("Nota: %d\n\n", alunos[i].nota);
            }
        }
        printf("\nAlunos reprovados:\n");
        for(int i=0; i<quantidadeAlunos; i++) {
            if(alunos[i].nota < 60) {
                printf("Aluno %d:\n", i+1);
                printf("Identidade: %d\n", alunos[i].identidade);
                printf("Nome: %s\n", alunos[i].nome);
                printf("Nota: %d\n\n", alunos[i].nota);
            }
        }
    } else {
        printf("Exibicao dos alunos aprovados e reprovados foi ignorada.\n");
    }
return;
}
void atvintermediario2() {
    typedef struct cadastroProduto {
        int codigo;
        char nome[50];
        int quantidadeDisponivel;
        float preco;
    }cadastroProduto;

    int quantidadeProdutos=0;
    printf("Digite a quantidade de produtos a serem cadastrados: ");
    scanf("%d", &quantidadeProdutos);
    if(quantidadeProdutos <= 0) {
        printf("Quantidade de produtos deve ser maior que zero.");
        return;
    }
    system(CLEAR_COMMAND);

    cadastroProduto produtos[quantidadeProdutos];

    printf("Digite os dados dos produtos:\n");
    for(int i=0; i<quantidadeProdutos; i++) {
        printf("Produto %d:\n", i+1);
        
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);

        printf("Codigo: ");
        scanf("%d", &produtos[i].codigo);
        
        printf("Quantidade disponivel: ");
        scanf("%d", &produtos[i].quantidadeDisponivel);
        if(produtos[i].quantidadeDisponivel < 0) {
            printf("Quantidade disponivel deve ser maior ou igual a zero. Tente novamente.\n");
            i--; // Volta para o mesmo produto
            continue;
        }
        
        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
        if(produtos[i].preco < 0) {
            printf("Preco deve ser maior ou igual a zero. Tente novamente.\n");
            i--; // Volta para o mesmo produto
            continue;
        }
        system(CLEAR_COMMAND);
    }

    printf("Mostrar os produtos em ordem crescente de preco singular ou total em estoque? (1 para preco singular, 2 para preco total, 0 para nao mostrar): ");

    int mostrarOrdem=0;
    scanf("%d", &mostrarOrdem);
    if(mostrarOrdem == 1) {
        // Ordenar por preco singular
        for(int i=0; i<quantidadeProdutos-1; i++) {
            for(int j=0; j<quantidadeProdutos-i-1; j++) { //Bubble Sort para ordenar os produtos por preco singular
                if(produtos[j].preco > produtos[j+1].preco) { //O produto atual é mais caro que o próximo produto?
                    cadastroProduto temp = produtos[j]; //Armazena o produto atual em uma variável temporária
                    produtos[j] = produtos[j+1]; //Substitui o produto atual pelo próximo produto
                    produtos[j+1] = temp; //Substitui o próximo produto pelo produto armazenado na variável temporária
                }
            }
        }
        printf("\nProdutos em ordem crescente de preco singular:\n");
        for(int i=0; i<quantidadeProdutos; i++) {
            printf("Produto %d:\n", i+1);
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Quantidade disponivel: %d\n", produtos[i].quantidadeDisponivel);
            printf("Preco: %.2f\n\n", produtos[i].preco);
        }
    } else if(mostrarOrdem == 2) {
        // Ordenar por preco total em estoque
        for(int i=0; i<quantidadeProdutos-1; i++) {
            for(int j=0; j<quantidadeProdutos-i-1; j++) {
                float precoTotalJ = produtos[j].preco * produtos[j].quantidadeDisponivel;
                float precoTotalJPlus1 = produtos[j+1].preco * produtos[j+1].quantidadeDisponivel;
                if(precoTotalJ > precoTotalJPlus1) {
                    cadastroProduto temp = produtos[j];
                    produtos[j] = produtos[j+1];
                    produtos[j+1] = temp;
                }
            }
        }
        printf("\nProdutos em ordem crescente de preco total em estoque:\n");
        for(int i=0; i<quantidadeProdutos; i++) {
            float precoTotal = produtos[i].preco * produtos[i].quantidadeDisponivel;
            printf("Produto %d:\n", i+1);
            printf("Codigo: %d\n", produtos[i].codigo);
            printf("Nome: %s\n", produtos[i].nome);
            printf("Quantidade disponivel: %d\n", produtos[i].quantidadeDisponivel);
            printf("Preco: %.2f\n", produtos[i].preco);
            printf("Preco total em estoque: %.2f\n\n", precoTotal);
        } 
    } else {
        printf("Exibicao dos produtos em ordem crescente de preco foi ignorada.\n");
    }
    return;
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

