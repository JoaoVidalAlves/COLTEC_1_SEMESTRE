/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    //-----------------------FACIL-----------------------
    // 1
/*
    float n1;

    while (n1 != -999) {
        
    printf("Informe um número (-999 encerra): ");
    scanf("%f", &n1);
    
    if (n1 <0) {
        printf("Número negativo\n");
    } else if (n1 >0) {
        printf("Número positivo\n");
    } else {
        printf("'0' é um numero neutro\n");
    }
}
*/
    // 2
/*
    int n1;
    
    while (n1 != -999) {
    
    printf("Informe um número (-999 encerra): ");
    scanf("%i", &n1);
    
    float verif = n1 % 2;
    
    if (verif == 1 || verif == -1) {
        printf("O numero informado é impar\n");
    } else {
        printf("O numero informado é par\n");
    }
}
*/
    // 3 
/*
    int idade;
    
    while (idade != -999) {
    
    printf("Qual a sua idade (-999 encerra): ");
    scanf("%i", &idade);
    
    if (idade <18) {
        printf("Você e menor de idade\n");
    } else {
        printf("Você e maior de idade\n");
    } 
}
*/
    // 4
/*
    int nota;
    
    while (nota != -999) {
    
    printf("Qual foi a sua nota (de 0 a 10) - (-999 encerra): ");
    scanf("%i", &nota);
    
    if (nota >= 0 && nota <= 5) {
        printf("Você foi reprovado\n");
    } else {
        printf("Você foi aprovado\n");
    } 
}
*/
    // 5
/*
    int n1, n2;
    
    printf("Digite um numero: ");
    scanf("%i", &n1);
    
    printf("Digite outro numero: ");
    scanf("%i", &n2);
    
    if (n1 == n2) {
        printf("Ambos os numeros informados são iguais.");
    } else if (n1 < n2) {
        printf("O segundo numero informado e maior do que o primeiro");
    } else {
        printf("O primeiro numero informado e maior do que o segundo");
    }
*/
    //-----------------------INTERMEDIARIO-----------------------
    // 1
/*
    int nota = 0;

	printf("Digite a nota: ");
	scanf("%i", &nota);

    if (nota >= 9) {
        printf("NOTA EXCELENTE");
    } else if (nota >=6 && nota <=8) {
        printf("NOTA BOA");
    } else if (nota >=3 && nota <=5) {
        printf("NOTA REGULAR"); 
    } else {
        printf("NOTA INSUFICIENTE");
    }
*/
    // 2
/*
	float nota1, nota2, nota3;

        printf("So é aprovado caso a media seja maior ou igual a 10\n");
        
	    printf("Nota 1: ");
	    scanf("%f", &nota1);

	    printf("Nota 2: ");
	    scanf("%f", &nota2);

	    printf("Nota 3: ");
	    scanf("%f", &nota3);

	 float calc = (nota1 + nota2 + nota3)/3;

	    if (calc >= 10)
	        printf("Media foi: %.2f (APROVADO)", calc);
	    else
	        printf("Media foi: %.2f (REPROVADO)", calc);
*/
    // 3
/*
        char user_registro [32];
    	char user_login [32];
    	char senha_registro [16];
    	char senha_login [16];
    	
    	printf("-------TELA DE REGISTRO-------\n");
    	
    	printf("CRIE SEU USUARIO: ");
    	    scanf(" %[^\n]", user_registro);
    	printf("CRIE SUA SENHA: ");
    	    scanf(" %[^\n]", senha_registro);
    	
    	printf("REGISTRO CONCLUIDO\n");
    	
    	printf("-------TELA DE LOGIN-------\n");
    	
    	printf("DIGITE SEU USUARIO: ");
    	    scanf(" %[^\n]", user_login);
    	printf("DIGITE SUA SENHA: ");
    	    scanf(" %[^\n]", senha_login);
    	
    	if ((strcmp(user_login, user_registro) == 0) && (strcmp(senha_login, senha_registro) == 0)) { //o comando strcmp compara 2 strings e retorna 0 caso sejam iguais e 1 caso sejam diferentes, precisa da biblioteca <string.h>
    	printf("LOGIN BEM SUCEDIDO");
    	} else { 
    	printf("CREDENCIAIS INCORRETAS"); 
    	}
*/
    // 4 
/*
        float num1, num2;
        char op;
        
        printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
        
        printf("Digite a operação (+, -, *, /): ");
            scanf("%s", &op);
        
        printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        
        switch (op) {
            case '+': printf("A soma entre %.2f e %.2f e: %.2f", num1, num2, num1 + num2); break;
            case '-': printf("A subtração entre %.2f e %.2f e: %.2f", num1, num2, num1 - num2); break;
            case '*': printf("A multiplicação entre %.2f e %.2f e: %.2f", num1, num2, num1 * num2); break;
            case '/': 
            
            if (num2 == 0) 
            {
            printf("Não é possivel dividir por 0");
            }else{
            printf("A divisão entre %.2f e %.2f e: %.2f", num1, num2, num1 / num2); break;}
        }
*/
    //-----------------------DIFICIL-----------------------
    // 1
/*
    int ano;
    
    printf("Informe um ano: ");
    scanf("%i", &ano);
    
    int por_quatro = ano % 4;
    int por_quatrocentos = ano % 400;
    int por_cem = ano % 100;
    
    if (por_quatro == 0 && por_cem >0) {
         printf("O ano informado e bissexto por ser divisivel por 4");
    } else if (por_cem == 0 && por_quatrocentos >0) {
         printf("O ano informado não e bissexto, por ser divisivel por 100 mas nao por 400");
    } else if (por_quatrocentos == 0) {
         printf("O ano informado é bissexto, por ser divisivel por 400");
    }
*/
    // 2
/*
    float ban_verde = 0.85858;
    float ban_amarela = 0.8774300;
    float ban_vermelha1 = 0.9032100;
    float ban_vermelha2 = 0.9373500;
    float consumo = 0;
    float bandeira = 0;
    
    printf("Qual foi o consumo em kWh: ");
    scanf("%f", &consumo);
    
    printf("\nQual a bandeira vigente: \n"
    "Bandeira verde = 1\n"
    "Bandeira amarela = 2\n"
    "Bandeira vermelha 1 = 3\n"
    "Bandeira vermelha 2 = 4\n"
    "Selecione: ");
    scanf("%f", &bandeira);
    
    if (bandeira == 1) {
        printf("A conta para a bandeira verde é de: R$ %.2f\n", ban_verde * consumo);
    } else if (bandeira == 2) {
        printf("A conta para a bandeira amarela é de: R$ %.2f\n", ban_amarela * consumo);
    } else if (bandeira == 3) {
        printf("A conta para a bandeira vermelha 1 é de: R$ %.2f\n", ban_vermelha1 * consumo);
    } else if (bandeira == 4) {
        printf("A conta para a bandeira vermelha 2 é de: R$ %.2f\n", ban_vermelha2 * consumo);
    } else {
        printf("Nenhuma bandeira informada.");
    }
*/
    // 3
/*
    float altura;
    float peso;
    
    printf("Informe sua altura em metros (ex.: 1.60): ");
    scanf("%f", &altura);
    
    printf("Informe seu peso: ");
    scanf("%f", &peso);

    float IMC = peso/(altura*altura); 

    if (IMC <= 18.50) {
        printf("Seu IMC é de %.2f, você está abaixo do peso", IMC);
    } else if (IMC >=18.51 && IMC <=24.99) {
        printf("Seu IMC é de %.2f, você está Eutrófico", IMC);
    } else if (IMC >=25 && IMC <=29.99) {
        printf("Seu IMC é de %.2f, você está em Sobrepeso", IMC);
    } else if (IMC >=30 && IMC <=34.99) {
        printf("Seu IMC é de %.2f, você está com Obesidade grau I", IMC);
    } else if (IMC >=35 && IMC <=39.99) {
        printf("Seu IMC é de %.2f, você está com Obesidade grau II", IMC);
    } else {
        printf("Seu IMC é de %.2f, você está com Obesidade grau III", IMC);
    }
*/
    // 4
/*
    int dinheiro;
    
    printf("Informe quanto tem na conta: ");
    scanf("%i", &dinheiro);
    
    if (dinheiro % 10 == 0 && dinheiro % 20 == 0 && dinheiro % 50 == 0 && dinheiro % 100 == 0 ) {
        printf("É possivel sacar com notas de 10, 20, 50 e 100");
    }else if (dinheiro % 10 == 0 && dinheiro % 20 == 0 && dinheiro % 50 == 0) {
        printf("É possivel sacar com notas de 10, 20 e 50");
    }else if (dinheiro % 10 == 0 && dinheiro % 20 == 0) {
        printf("É possivel sacar com notas de 10 e 20");
    }else if (dinheiro % 10 == 0) {
        printf("É possivel sacar apenas com notas de 10");
    } else {
        printf("Não e possivel sacar apenas com notas");
    }
*/
    return 0;
}