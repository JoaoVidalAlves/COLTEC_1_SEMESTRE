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
    //Cria o vetor e verifica se houve erro durante a criação
    float *notas =calloc(10, sizeof(float));
    if(notas==NULL) {
        printf("Erro no alocamento.");
        free(notas);
    }

    //Insere até a nota 9 continuamente
    printf("Inserindo 10 notas:\n");
    
    for(int i=0; i<10; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    char resposta;
    printf("Dejesa inserir mais notas? (s/n): ");
    scanf(" %c", &resposta);
    
    if(resposta=='s' || resposta=='S') {
        
        int qtd_extra=0;
        
        printf("Quantas notas deseja inserir: ");
        scanf("%d", &qtd_extra);

        int total = 10 + qtd_extra;

        //Atualiza o vetor existente com a nova quantidade de notas
        float *temp = realloc(notas, total * sizeof(float));
        
        if(temp == NULL) {
            printf("Erro no realloc.\n");
            free(notas);
        }

        notas = temp;

        //Insere as novas notas
        for(int i=10; i < total; i++) {
            printf("Digite a nota %d: ", i+1);
            scanf("%f", &notas[i]);
        }
        //IMPRIME AS NOTAS
        printf("\nNotas inseridas:\n");
        for(int i=0; i < total; i++) {
        printf("Nota %d: %2.f\n",i+1, notas[i]);
        }

        char entrada;
        printf("Deseja calcular a media ou encerrar (M/E): ");
        scanf(" %c", &entrada);

        if(entrada=='M' || entrada=='m') {
            float soma=0;
            for(int i=0; i<total; i++) {
                soma+=notas[i];
            }
            printf("A media foi: %.2f\n", soma/total);
        }
    }
    printf("ENCERRADO.");
    free(notas);
}
void atvintermediario2() {
    int qtde_numeros = 0;

    printf("Quantos números deseja inserir: ");
    scanf("%d", &qtde_numeros);
    if(qtde_numeros <= 0) {
        printf("Quantidade inválida.\n");
        return;
    }

    int *numeros = calloc(qtde_numeros, sizeof(int));
    if (numeros == NULL) {
        printf("Erro no alocamento.\n");
        return;
    }

    for (int i = 0; i < qtde_numeros; i++) {
        int entrada = 0;
        printf("Insira o %dº numero: ", i + 1);
        scanf("%d", &entrada);
        numeros[i] = entrada;
    }

    char resposta;
    printf("Deseja alterar algum valor (s/n): ");
    scanf(" %c", &resposta);
    if (resposta == 's' || resposta == 'S') {
        int alt = 0;
        int novo_valor = 0;
        printf("Numeros inseridos:\n");

        for (int i = 0; i < qtde_numeros; i++) {
            printf("Posição %d: %d\n", i + 1, numeros[i]);
        }

        printf("Qual posição deseja alterar: ");
        scanf("%d", &alt);
        if(alt <= 0 || alt > qtde_numeros) {
            printf("Posição inválida.\n");
            free(numeros);
            return;
        }

        if (alt >= 1 && alt <= qtde_numeros) {
            printf("Qual o novo valor: ");
            scanf("%d", &novo_valor);
            numeros[alt - 1] = novo_valor;

            printf("\nVetor atualizado:\n");
            for (int i = 0; i < qtde_numeros; i++) {
                printf("Posição %d: %d\n", i + 1, numeros[i]);
            }
        } else {
            printf("Posição Invalida.\n");
        }
    }
    free(numeros);
}
void atvintermediario3() {   
    int **matriz, linhas = 0, colunas = 0;
    
    printf("Quantidade de linhas: ");
    scanf("%d", &linhas);
    
    matriz = malloc(linhas * sizeof(*matriz));
    if(matriz == NULL) {
        printf("Erro no alocamento.\n");
        return;
    }
    
    printf("\nQuantidade de colunas: ");
    scanf("%d", &colunas);
    
    for(int i = 0; i < linhas; i++) {
        matriz[i] = malloc(colunas * sizeof(int));
        if(matriz[i] == NULL) {
            printf("Erro no alocamento.\n");
            for (int k = 0; k < i; k++) {
                free(matriz[k]);
            }
            free(matriz);
            return;
        }
    }
    
    int valores=0;
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            //system("clear")
            printf("Digite o valor para a posição L[%d] C[%d]: ", i+1, j+1);
            scanf("%d", &valores);
            matriz[i][j] = valores;
        }
    }
    
    for(int i = 0; i < linhas; i++) {
        printf("\n");
    for(int j = 0; j < colunas; j++) {
        printf("%d\t", matriz[i][j]);
        }  
    }
    
    for(int i=0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return;
}
void atvintermediario4() {
    #define MAX_STR 51
    #define LINHAS 5
    #define COLUNAS 7

    int **calendario;
    char ***agenda;

    //ALOCAR MEMORIA PARA O CALENDARIO - LINHAS
    calendario = malloc(LINHAS * sizeof(*calendario));
    if(calendario == NULL) {
        printf("Erro no alocamento.\n");
        return;
    }

    //ALOCAR MEMORIA PARA O CALENDARIO - COLUNAS
    for(int i = 0; i < LINHAS; i++) {
        calendario[i] = malloc(COLUNAS * sizeof(int));
        if(calendario[i] == NULL) {
            printf("Erro no alocamento.\n");
            for (int k = 0; k < i; k++) {
                free(calendario[k]);
            }
            free(calendario);
            return;
        }
    }

    //PRENCHER O CALENDARIO
    int dia=0;
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            if (dia < 31) {
                calendario[i][j] = dia++;
            } else {
                calendario[i][j] = 0;
            }
        }
    }

    //IMPRIME O CALENDARIO
    for(int i = 0; i < LINHAS; i++) {
        printf("\n");
        for(int j = 0; j < COLUNAS; j++) {
            printf("%d\t", calendario[i][j]);
        }
    }
    
    //ALOCAR MEMORIA PARA A AGENDA - LINHAS
    agenda = malloc(LINHAS * sizeof(**agenda));
    if(agenda == NULL) {
        printf("Erro no alocamento.\n");
        for (int k = 0; k < LINHAS; k++) {
            free(calendario[k]);
        }
        free(calendario);
        return;
    }
    
    //ALOCAR MEMORIA PARA A AGENDA - COLUNAS
    for(int i = 0; i < LINHAS; i++) {
        agenda[i] = malloc(COLUNAS * sizeof(*agenda[i]));
        if(agenda[i] == NULL) {
            printf("Erro no alocamento.\n");
            for (int k = 0; k < i; k++) {
                free(agenda[k]);
            }
            free(agenda);
            for (int k = 0; k < LINHAS; k++) {
                free(calendario[k]);
            }
            free(calendario);
            return;
        }

        //ALOCAR MEMORIA PARA AS STRINGS DA AGENDA
        for(int j = 0; j < COLUNAS; j++) {
            agenda[i][j] = malloc(MAX_STR * sizeof(char));
            agenda[i][j][0] = '\0';
            if(agenda[i][j] == NULL) {
                printf("Erro no alocamento.\n");
                for (int k = 0; k < j; k++) {
                    free(agenda[i][k]);
                }
                free(agenda[i]);
                for (int k = 0; k < i; k++) {
                    free(agenda[k]);
                }
                free(agenda);
                for (int k = 0; k < LINHAS; k++) {
                    free(calendario[k]);
                }
                free(calendario);
                return;
            }
        }
    }

    //PRENCHER A AGENDA
    char entrada[MAX_STR];
    int diaSelec=0;
    printf("\n\nPreencha a agenda (Digite 'sair' para encerrar):\n");
    printf("Selecione o dia (1-31): ");
    scanf("%d", &diaSelec);
    while (diaSelec != 0) {
        if (diaSelec < 1 || diaSelec > 31) {
            printf("Dia inválido. Tente novamente.\n");
        } else {
            int linha = (diaSelec - 1) / COLUNAS;
            int coluna = (diaSelec - 1) % COLUNAS;

            printf("Digite o compromisso para o dia %d: ", diaSelec);
            scanf(" %[^\n]", entrada);

            if (strcmp(entrada, "sair") == 0) {
                break;
            }

            strncpy(agenda[linha][coluna], entrada, MAX_STR);
            agenda[linha][coluna][MAX_STR - 1] = '\0';
        }
        printf("Selecione o dia (1-31): ");
        scanf("%d", &diaSelec);
    }

    //IMPRIME A AGENDA
    printf("\nAgenda:\n");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            if(agenda[i][j][0] != '\0') {
                printf("Dia %d: %s\n", calendario[i][j] + 1, agenda[i][j]);
            }
        }
    }

    //LIBERAR MEMORIA
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            free(agenda[i][j]);
        }
        free(agenda[i]);
    }
    free(agenda);
    for(int i = 0; i < LINHAS; i++) {
        free(calendario[i]);
    }
    free(calendario);
    return;
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