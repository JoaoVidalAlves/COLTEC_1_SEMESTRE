#include <stdio.h>
#include <string.h>

int main () {

//FACIL

	/*
	int num1, num2;

	    printf("Informe um numero: ");
	    scanf("%i", &num1);

	    printf("Informe outro numero: ");
	    scanf("%i", &num2);

	    printf("A soma de %i e %i C) %i", num1, num2, num1 + num2);

	    return 0;

	*/
	
	/*
	float nota1, nota2;

	    printf("Informe uma nota: ");
	    scanf("%f", &nota1);

	    printf("Informe outra nota: ");
	    scanf("%f", &nota2);

	    printf("A media entre %.2f e %2.f e) %.2f", nota1, nota2, (nota1+nota2)/2);

	    return 0;

	*/

	/*
	float base, altura;

	    printf("Informe a base: ");
	    scanf("%f", &base);

	    printf("Informe a altura: ");
	    scanf("%f", &altura);

	    printf("A area e %.2f", base*altura);
        
        return 0;
	*/

//INTERMEDIARIO

	/*
	 int num1;
	 int ver;

	    printf("Digite um numero: ");
	    scanf("%i", &num1);

	    ver = num1 % 2;

	    if (ver == 0)
	    printf("O numero informado e par");
	    else
	    printf("O numero informado e impar");
	   
	    return 0;
	*/

    /*
	float nota1, nota2, nota3;

	    printf("Nota 1: ");
	    scanf("%f", &nota1);

	    printf("Nota 2: ");
	    scanf("%f", &nota2);

	    printf("Nota 3: ");
	    scanf("%f", &nota3);

	    float calc = (nota1 + nota2 + nota3)/3;

	    if (calc >= 10)
	        printf("Media foi: %f (APROVADO)", calc);
	    else
	        printf("Media foi: %f (REPROVADO)", calc);
	  
	        return 0;
	*/ 

    /*
	
	float lado1, lado2, lado3;

	    printf("Lado 1: ");
	    scanf("%f", &lado1);

	    printf("Lado 2: ");
	    scanf("%f", &lado2);

	    printf("Lado 3: ");
	    scanf("%f", &lado3);

	    if (((lado1 + lado2) > lado3) && ((lado1 + lado3) > lado2) && ((lado2 + lado3) > lado1))
	        printf("Triangulo existe");
	    else
	        printf("Triangulo nao existe");
	  
	       return 0;
    */
    
//DIFICIL

    /*	
	int nota = 0;

	printf("Digite a nota ou -1 para sair: ");
	scanf("%i", &nota);

	    while (nota > -1) 
	    {
	    if (nota >=67)
	        printf("NOTA A\n");
	    else if (nota >=34 && nota <=66)
	        printf("NOTA B\n");
	    else
 	        printf("NOTA C\n");
	 
	        printf("Digite a nota ou -1 para sair: ");
	        scanf("%i", &nota);
	    }
	        printf("Programa encerrado!");
	      
	      return 0;
    */

	/*
	
	float lado1, lado2, lado3;

	    printf("Lado 1: ");
	    scanf("%f", &lado1);

	    printf("Lado 2: ");
	    scanf("%f", &lado2);

	    printf("Lado 3: ");
	    scanf("%f", &lado3);

	    if (((lado1 + lado2) > lado3) && ((lado1 + lado3) > lado2) && ((lado2 + lado3) > lado1))
	        printf("Triangulo existe\n");
	    else
	        printf("Triangulo nao existe\n");

	    if (lado1 == lado2 && lado2 == lado3)
	        printf("Triangulo equilatero");
	    else if ((lado1 == lado2 && lado1 != lado3)||(lado1 == lado3 && lado1 != lado2)||(lado2 == lado3 && lado2 != lado1)) {
	        printf("Triangulo isosceles");
	    else if (lado1 != lado2 != lado3)
	        printf("Triangulo escaleno");
	    
	    return 0;
    */

	/*
	    int temp = 0;

	    printf("Informe a temperatura em graus celcius (temp menor ou igual a -1 o programa para): ");
	    scanf("%i", &temp);

	    while (temp > -1)
	    {
	    printf("Digite outra temperatura:");
	    scanf("%i", &temp);
	    }

	    printf("Programa encerrado");

	    return 0;
	*/
	
	/*
	char user_registro [100];
	char user_login [100];
	char senha_registro [100];
	char senha_login [100];
	
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
	
	if ((strcmp(user_login, user_registro) == 0) && (strcmp(senha_login, senha_registro) == 0))
	printf("LOGIN BEM SUCEDIDO");
	else 
	printf("CREDENCIAIS INCORRETAS");
    
    */
    
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
        printf("A divisão entre %.2f e %.2f e: %.2f", num1, num2, num1 / num2); break;
            }
        return 0;
                }
    */
    
]