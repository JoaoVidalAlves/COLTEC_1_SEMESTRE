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
    printf("\nSelecione o exercicio (1 a 3): ");
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
        /*
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
void atvfacil3() {

}
void atvfacil4() {

}
void atvfacil5() {

}

void atvintermediario1() {
    limparTela();
    iniciarSistema();
    
    printf("\nQUESTÃO 6\n");
    srand(time(NULL));
    
	FILE *arquivo;

    arquivo = abrirArquivoGravacao();
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }

    for(int i=0; i<20; i++) {
        int num = rand()%100;
        fprintf(arquivo, "%d\n",num);
    }
    
    fclose(arquivo);

    printf("Arquivo com 20 números aleatorios criado.\n\n");

    arquivo = abrirArquivoLeitura();
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return;
    }   
    
    char linha[256];
    int contadorPar=0;
    int contadorImpar=0;
    int numero=0;
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        numero = atoi(linha);
        if(numero % 2 == 0) 
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

}
void atvintermediario3() {   

}
void atvintermediario4() {

}
void atvintermediario5() {

}