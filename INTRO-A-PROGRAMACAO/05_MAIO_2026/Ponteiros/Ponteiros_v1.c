/******************************************************************************

▶ Facil
1. Aloque uma quantidade de 10 valores em um vetor.
1.2. Crie uma funcao que mostra os valores de um vetor;
2. Criar uma funcao de calculadora com todas as operacoes basicas.

▶ Intermediario
1. Criar uma funçao que armazena as notas introduzidas de forma dinamicas. Considere tambem uma funçao para mostrar todas as notas incluıdas e que calcula a media.
2. Criar uma funcao que leia varios numeros de modo dinamico e possibilite alterar algum dos numeros.
3. Aloque uma matriz dinamica de tamanho informado pelo usuario.
4. Criar um sistema de agenda com strings dinamicas de ate 50 caracteres.

▶ Difıcil
1. A partir de uma matriz dinamica, iniciada com zero, possibilite a alocacao de valores
em posicoes especıficas. Nao aloque memoria nas posicoes de interesse.
2. Crie um vetor que vai empilhando n ́umeros. Duas opera ̧c ̃oes s ̃ao poss ́ıveis:
    Adicionar um novo n ́umero na pilha, ou;
    Remover o  ́ultimo n ́umero empilhado.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
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
    printf("\nSelecione o exercicio (1 a 5): ");
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
        case 5: {
            atvintermediario5();    
        }
        break;
        default : {
            printf("Selecione um exercicio valido");
        }
    }    
}

void menuDificil() {
    int exercicio=0;
    system(CLEAR_COMMAND);
    printf("\n***EXERCICIOS DIFICEIS***\n");
    printf("\nSelecione o exercicio (1 a 5): ");
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
        case 3: {
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
        break;
        default : {
            printf("Selecione um exercicio valido");
        }
    }    
}

void atvfacil1() {

    void mostrarVetor(int *vetor) {
        printf("\nValores do vetor:\n");
        for(int i=0; i<10; i++) {
            printf("Posicao %d: %d\n", i+1, vetor[i]);
        }
    }

    int *vetor = malloc(10 * sizeof(int));

    for(int i=0; i<10; i++) {
        printf("Digite o valor para a posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    mostrarVetor(vetor);
    free(vetor);
}
void atvfacil2() {
    char *op;
    int *num1, *num2, *resultado;
    num1 = malloc(1*sizeof(int));
    num2 = malloc(1*sizeof(int));
    resultado = malloc(1*sizeof(int));
    op = malloc(1*sizeof(char));
    
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", op);
    
    printf("Digite o primeiro numero: ");
    scanf("%d", num1);
   
    printf("Digite o segundo numero: ");
    scanf("%d", num2);
    
    switch (*op) {
        case '+': {
            *resultado = *num1 + *num2;
        }
            break;
        case '-': {
            *resultado = *num1 - *num2;
        }
            break;
        case '*': {
            *resultado = *num1 * *num2;
        }
            break;
        case '/': {
            if (*num2 != 0) {
                *resultado = *num1 / *num2;
            } else {
                printf("Erro: Divisao por zero!\n");
                free(num1);
                free(num2);
                free(resultado);
                free(op);
                return;
            }
        }
            break;
        default:
            printf("Operacao invalida!\n");
            free(num1);
            free(num2);
            free(resultado);
            free(op);
            return;
    }
    printf("Resultado: %d\n", *resultado);
    free(num1);
    free(num2);
    free(resultado);
    free(op);
}
void atvfacil3() {
    printf("EM CONSTRUÇÃO");
}
void atvfacil4() {
    printf("EM CONSTRUÇÃO");
}
void atvfacil5() {
    printf("EM CONSTRUÇÃO");
}

void atvintermediario1() {
    printf("EM CONSTRUÇÃO");
}
void atvintermediario2() {
    printf("EM CONSTRUÇÃO");
}
void atvintermediario3() {
    printf("EM CONSTRUÇÃO");
}
void atvintermediario4() {
    printf("EM CONSTRUÇÃO");
}
void atvintermediario5() {
    printf("EM CONSTRUÇÃO");
}

void atvdificil1() {
    printf("EM CONSTRUÇÃO");
}
void atvdificil2() {
    printf("EM CONSTRUÇÃO");
}
void atvdificil3() {
    printf("EM CONSTRUÇÃO");
}
void atvdificil4() {
    printf("EM CONSTRUÇÃO");
}
void atvdificil5() {
    printf("EM CONSTRUÇÃO");
}