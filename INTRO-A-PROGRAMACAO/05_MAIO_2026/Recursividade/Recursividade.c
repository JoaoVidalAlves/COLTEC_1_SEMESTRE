/******************************************************************************
Fácil
    1 - Gere uma contagem regressiva de um número lido até zero.
    2 - Apresente a soma de n termos de números inteiros.
    3 - Faça um programa que apresente o fatorial de n.

Intermediário
    1 - Receba um vetor e mostre-o na ordem inversa.
    2 - Em um vetor de números, indique a posição de um determinado elemento, se existir.
    3 - Verifique se uma string representa um palíndromo, ou seja, se lida na ordem inversa, representa a mesma palavra.

    Avançado
    1 - Imprima a Série de Fibonacci até o n-ésimo elemento.
    2 - Crie um organograma empresarial composto por:
        Presidente
        Diretores
        Gerentes
        Técnicos
        Auxiliares
        Estagiários
    Elabore também funções para:
        Imprimir a hierarquia
        Calcular o custo por equipe
        Mostrar a quantidade de funcionários
        Encontrar o maior salário de cada subgrupo
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

int validarNumero(char entrada[]) {

    int i = 0;

    if(entrada[0] == '-')
        i++;

    if(entrada[i] == '\0')
        return 0;

    for(; entrada[i] != '\0'; i++) {

        if(!isdigit(entrada[i])) {
            return 0;
        }
    }

    return atoi(entrada);
}

// DECLARAR PROTOTIPOS DO MENU E ATIVIDADES
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

// PROTOTIPO DO MENU
int main()
{
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt-BR");
    int dificuldade = 0;

    printf("***EXERCICIOS DE RECURSIVIDADE***\n");
    printf("\nSelecione a dificuldade\n");
    printf("\n");
    printf("1 = FACIL\n");
    printf("2 = INTERMEDIARIO\n");
    printf("3 = DIFICIL\n");
    printf("\nSelecione: ");
    scanf("%i", &dificuldade);

    switch (dificuldade)
    {
    case 1:
    {
        menuFacil();
    }
    break;
    case 2:
    {
        menuIntermediario();
    }
    break;
    case 3:
    {
        menuDificil();
    }
    break;
    default:
    {
        printf("Selecione uma dificuldade valida.");
    }
    }

    return 0;
}

// PROTOTIPO DAS DIFICULDADES
void menuFacil()
{
    int exercicio = 0;
    system(CLEAR_COMMAND);
    printf("\n***EXERCICIOS FACEIS***\n");
    printf("\nSelecione o exercicio (1 a 3): ");
    scanf("%d", &exercicio);

    switch (exercicio)
    {
    case 1:
    {
        atvfacil1();
    }
    break;
    case 2:
    {
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
    default:
    {
        printf("Selecione um exercicio valido");
    }
    }
}

void menuIntermediario()
{
    int exercicio = 0;
    system(CLEAR_COMMAND);
    printf("\n***EXERCICIOS INTERMEDIARIOS***\n");
    printf("\nSelecione o exercicio (1 a 3): ");
    scanf("%d", &exercicio);

    // system(CLEAR_COMMAND);

    switch (exercicio)
    {
        case 1:
        {
            atvintermediario1();
        }
        break;
        case 2:
        {
            atvintermediario2();
        }
        break;
        case 3:
        {
            atvintermediario3();
        }
        break;
        /*
        case 4:
        {
            atvintermediario4();
        }
        break;
        case 5: {
            atvintermediario5();
        }
        break;
        */
        default:
        {
            printf("Selecione um exercicio valido");
        }
    }
}

void menuDificil()
{
    int exercicio = 0;
    system(CLEAR_COMMAND);
    printf("\n***EXERCICIOS DIFICEIS***\n");
    printf("\nSelecione o exercicio (1 a 2): ");
    scanf("%d", &exercicio);

    // system(CLEAR_COMMAND);

    switch (exercicio)
    {
    case 1:
    {
        atvdificil1();
    }
    break;
    case 2:
    {
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
    default:
    {
        printf("Selecione um exercicio valido");
    }
    }
}

void atvfacil1()
{
void contagemRegressiva(int num)
{
    if(num <= 0)
        return;

    num--;

    printf("%d\n", num);

    contagemRegressiva(num);
}

    char entrada[10];
    int numero = 0;

    while(numero <= 0)
    {
        printf("Digite um numero maior que 0:\n");

        scanf(" %9[^\n]", entrada);

        numero = validarNumero(entrada);

        if(numero <= 0)
        {
            printf("Valor invalido!\n\n");
        }
    }

    contagemRegressiva(numero);

    return 0;
}
void atvfacil2()
{
    int somaNtermos(int num)
    {
        if(num == 0)
        {
            return 0;    
        }
        else
        {
            return num + somaNtermos(num-1);
        }
    }

    char entrada[10];
    int numero = 0;

    while(numero <= 0)
    {
        printf("Digite um numero maior que 0:\n");

        scanf(" %9[^\n]", entrada);

        numero = validarNumero(entrada);

        if(numero <= 0)
        {
            printf("Valor invalido!\n\n");
        }
    }

    somaNtermos(numero);
    
    printf("Soma = %d\n", somaNtermos(numero));
    
    return 0;
}
void atvfacil3()
{
long long fatorial(int num)
{
    if(num <= 1)
    {
        return 1;    
    }
    else
    {
        return num * fatorial(num - 1);
    }
}

    char entrada[10];
    int numero = 0;

    while(numero <= 0)
    {
        printf("Digite um numero maior que 0:\n");

        scanf(" %9[^\n]", entrada);

        numero = validarNumero(entrada);

        if(numero <= 0)
        {
            printf("Valor invalido!\n\n");
        }
    }

    fatorial(numero);
    
    printf("Fatorial = %d\n", fatorial(numero));
    
    return 0;
}
void atvfacil4()
{
}
void atvfacil5()
{
}

void atvintermediario1()
{
void mostrarInverso(int vetor[], int tamanho)
{
    if(tamanho == 0)
        return;

    printf("%d ", vetor[tamanho-1]);

    mostrarInverso(vetor, tamanho-1);
}
    char entrada[20];
    int tamanho = 0;

    while(tamanho <= 0)
    {
        printf("Digite o tamanho do vetor: ");
        scanf(" %19[^\n]", entrada);

        tamanho = validarNumero(entrada);
    }

    int vetor[tamanho];

    for(int i=0;i<tamanho;i++)
    {
        do{
            printf("Elemento %d: ", i+1);

            scanf(" %19[^\n]", entrada);

            vetor[i] = validarNumero(entrada);

        }while(vetor[i]==0 && entrada[0]!='0');
    }

    printf("\nVetor inverso:\n");

    mostrarInverso(vetor,tamanho);

    return 0;
}
void atvintermediario2()
{
int procurarElemento(int vetor[], int tamanho, int elemento, int indice)
{
    if(indice >= tamanho)
        return -1;

    if(vetor[indice] == elemento)
        return indice;

    return procurarElemento(vetor, tamanho, elemento, indice+1);
}
    char entrada[20];

    int tamanho=0;

    while(tamanho<=0)
    {
        printf("Tamanho do vetor: ");

        scanf(" %19[^\n]", entrada);

        tamanho=validarNumero(entrada);
    }

    int vetor[tamanho];

    for(int i=0;i<tamanho;i++)
    {
        printf("Elemento %d: ",i+1);

        scanf(" %19[^\n]", entrada);

        vetor[i]=validarNumero(entrada);
    }

    printf("Elemento que deseja procurar: ");

    scanf(" %19[^\n]", entrada);

    int buscar = validarNumero(entrada);

    int posicao = procurarElemento(vetor,tamanho,buscar,0);

    if(posicao==-1)
        printf("Nao encontrado\n");
    else
        printf("Encontrado na posicao %d\n",posicao);

    return 0;
}
void atvintermediario3()
{
int palindromo(char str[], int inicio, int fim)
{
    if(inicio >= fim)
        return 1;

    if(str[inicio] != str[fim])
        return 0;

    return palindromo(str, inicio+1, fim-1);
}
    char palavra[100];

    printf("Digite uma palavra: ");

    scanf(" %99[^\n]", palavra);

    if(palindromo(palavra,0,strlen(palavra)-1))
        printf("Palindromo\n");

    else
        printf("Nao e palindromo\n");

    return 0;
}
void atvintermediario4()
{
}
void atvintermediario5()
{
}

void atvdificil1()
{
}
void atvdificil2()
{
}
void atvdificil3()
{
}
void atvdificil4()
{
}
void atvdificil5()
{
}