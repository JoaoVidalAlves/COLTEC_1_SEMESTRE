#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
#include <time.h>

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

FILE *abrirArquivoGravacao() {
    
    FILE *arquivo;
    
    arquivo = fopen("arquivo.txt", "w");
	if (arquivo == NULL)
	{
		printf("Erro na abertura do arquivo!");
	}
	
	return arquivo;
}

FILE *abrirArquivoLeitura() {
    
    FILE *arquivo;
    
    arquivo = fopen("arquivo.txt", "r");
	if (arquivo == NULL)
	{
		printf("Erro na abertura do arquivo!");
	}
	
	return arquivo;
}

FILE *abrirArquivoGravacaoNovo() {
    
    FILE *arquivo;
    
    arquivo = fopen("temp.txt", "w");
	if (arquivo == NULL)
	{
		printf("Erro na abertura do arquivo!");
	}
	
	return arquivo;
}

void limparTela() {
    system(CLEAR_COMMAND);
}

void iniciarSistema() {
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt-BR");
}

//DECLARAR PROTOTIPOS DO MENU E ATIVIDADES
void menuFacil();
void menuIntermediario();

void atvfacil1();
void atvfacil2();

void atvintermediario1();
void atvintermediario2();

//PROTOTIPO DO MENU
int main() {
    setlocale(LC_ALL, "pt-BR");
    int dificuldade=0;

    printf("***EXERCICIOS DE ARQUIVOS***\n");
    printf("\nSelecione a dificuldade\n");
    printf("\n");
    printf("1 = FACIL\n");
    printf("2 = INTERMEDIARIO\n");
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

void atvfacil1() {
    limparTela();
    iniciarSistema();
    FILE *arquivo;

    arquivo = abrirArquivoGravacao();
	
	char nome[50];
	
    printf("Questão 1\n");
    printf("Digite seu nome: ");
	
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    fgets(nome, 50, stdin);
	nome[strcspn(nome, "\n")] = 0;

	char idade[4];
	int idadeV=0;
	do
	{
		printf("Digite sua Idade: ");
		scanf(" ");
        scanf(" %3[^\n]", idade);
		int c; while ((c = getchar()) != '\n' && c != EOF); 
		idadeV = validarNumero(idade);
	} while (idadeV <= 0);

	fprintf(arquivo, "%s;%d\n", nome, idadeV);
	
	fclose(arquivo);
	
    arquivo = abrirArquivoLeitura();
    
    char textoNome[50];
    int textoIdade;
    
    printf("\nQuestão 2\n");
    
    if (fscanf(arquivo, " %49[^;];%d", textoNome, &textoIdade) == 2) {
        printf("Arquivo gerado com sucesso!\n");
        printf("Nome: %s\n", textoNome);
        printf("Idade: %d\n", textoIdade);
    } else {
        printf("Erro ao ler os dados do arquivo.\n");
    }

    fclose(arquivo);
    return;
}
void atvfacil2() {
    limparTela();
    iniciarSistema();
    
    //QUESTAO 3
    srand(time(NULL));
    
	FILE *arquivo;
	FILE *temp;

    arquivo = abrirArquivoGravacao();
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }

    for(int i=0; i<100; i++) {
        int num = rand()%1000000;
        fprintf(arquivo, "%d\n",num);
    }
    
    fclose(arquivo);
    printf("QUESTÃO 3\n");
    printf("Arquivo com 100 números aleatorios criado.\n\n");

    //QUESTAO 4
    arquivo = abrirArquivoLeitura();
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }   
    
    char linha[256];
    int contador=0;
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        contador++;
    }
    
    fclose(arquivo);
    
    printf("QUESTÃO 4\n");
    printf("Quantidade de linhas: %d\n\n", contador);
    
    //QUESTAO 5
    arquivo = abrirArquivoLeitura();
        if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }
    
    temp = abrirArquivoGravacaoNovo();
        if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }

    char buffer[1024];
    size_t bytes;
    
    while ((bytes = fread(buffer, 1, sizeof(buffer), arquivo)) > 0) {
        fwrite(buffer, 1, bytes, temp);
    }
    
    fclose(arquivo);
    fclose(temp);
    
    printf("QUESTÃO 5\n");
    printf("Dados do arquivo.txt copiados para o temp.txt");
    return;
}

void atvintermediario1() {
    limparTela();
    iniciarSistema();
    
    printf("\nQUESTÃO 6\n");
    
    srand(time(NULL));
    
	FILE *arquivo;

    arquivo = abrirArquivoGravacao();

    for(int i=0; i<20; i++) {
        int num = rand()%20;
        fprintf(arquivo, "%d\n",num);
    }
    
    fclose(arquivo);

    printf("Arquivo com 20 números aleatorios criado.\n\n");

    arquivo = abrirArquivoLeitura();
    
    int contadorPar=0;
    int contadorImpar=0;
    int numero=0;
    
    printf("Numeros escritos\n");

    while (fscanf(arquivo, "%d", &numero) == 1) {
        if (numero % 2 == 0)
        {
            contadorPar++;
        } else
        {
            contadorImpar++;
        }
    }
    
    printf("Total de numeros pares: %d\nTotal de numeros impares: %d", contadorPar, contadorImpar);

    printf("\n\nQUESTÃO 7");
    
    fseek(arquivo, 0, SEEK_END);
    long tamanho = ftell(arquivo);

    printf("\nTamanho do arquivo: %ld bytes", tamanho);
    
    fclose(arquivo);
}
void atvintermediario2() {
    limparTela();
    iniciarSistema();
    
    srand(time(NULL));
    
	FILE *arquivo;
    FILE *temp;

    arquivo = abrirArquivoGravacao();

    for(int i=0; i<20; i++) {
        int num = rand()%20;
        fprintf(arquivo, "%d\n",num);
    }
    
    fclose(arquivo);

    printf("Arquivo com 20 números aleatorios criado.\n\n");

    arquivo = abrirArquivoLeitura();
    
    temp = abrirArquivoGravacaoNovo();

    int numero=0;
    
    while (fscanf(arquivo, "%d", &numero) == 1) {
        if (numero > 10) 
        {
            fprintf(temp, "%d\n", numero);
        }
    }

    printf("\nNumeros maiores que 10 copiados para o arquivo temp\n");
    
    rewind(arquivo);
    
    int soma=0;
    while (fscanf(arquivo, "%d", &numero) == 1) {
        soma += numero;
    }

    printf("\nMedia = %.2f\n", (float)soma/20);
    printf("Soma total = %d", soma);


    fclose(arquivo);
    fclose(temp);
}