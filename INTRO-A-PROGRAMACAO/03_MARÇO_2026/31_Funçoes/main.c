/******************************************************************************
Introdução a programação - 1/2026
Aula: FUNÇOES (31/03)

Versão: 1.0

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int numero_par_ou_impar (int numero) {
    int resultado_par_ou_impar;
    resultado_par_ou_impar = numero % 2;
    return(resultado_par_ou_impar);
}

float calculadora (float num1, float num2, char op) {
        switch (op) {
            case '+': {
                return num1 + num2;
            }
            break;
            case '-': {
                return num1 - num2;
            }
            break;
            case '*': {
                return num1 * num2;
            }
            break;
            case '/': {
            if (num2 == 0) {
                printf("Não é possivel dividir por 0");
                return -1;
            } else {
                return num1 / num2;
            }
            }
            break;
            default: {
                printf("Operador invalido!");
                return -1;
            }
        }
}

void Maior_e_Menor (int num1, int num2) {
    
    if (num1 > num2) {
        printf("Maior: %i\n", num1);
        printf("Menor: %i", num2);
    } else {
        printf("Maior: %i\n", num2);
        printf("Menor: %i", num1);
    }
}
//Usei o void pela função não precisar retornar nenhum valor apenas o printf

int somatorio (int numero) {
    int total = 0;
    for (int contador = 0; contador <= numero; contador++) {
        total += contador;
    }
    return total;
}

int calc_fatorial (int numero) {
    int total = 1;
    for (int contador = 1; contador <= numero; contador++) {
        total *= contador;
    }
    return total;
}

long long int fibonacci (int termo) {
long long termo_atual=2, pri_termo_ant=0, seg_termo_ant=1;
for(int contador=3; contador <= termo; contador++) { //CONTADOR COMEÇA EM 3 PORQUE PRECISA CALCULAR A PARTIR DO 3 TERMO
        termo_atual = pri_termo_ant + seg_termo_ant;
        pri_termo_ant = seg_termo_ant;
        seg_termo_ant = termo_atual;
        printf("%lld ", termo_atual);
    }
return termo_atual;
}

int ver_palindromo (int numero) {
    int ult_digito=0;
    int palindromo=0;
    
    while (numero != 0) {
        ult_digito = numero % 10;
        palindromo = palindromo * 10 + ult_digito;
        numero = numero / 10;
    }
    return palindromo;
}

void ver_senha (char senha[30]) {
    int i=0;
    int tem_lm=0;
    int tem_lM=0;
    int tem_num=0;
    int tem_simb=0;
    int ver_de_qtd=0;
     
    while (senha[i] != '\0') {
        if (senha[i] >= 'a' && senha[i] <= 'z') {
            tem_lm=1;
        }
        else if (senha[i] >= 'A' && senha[i] <= 'Z') {
            tem_lM=1;
        }
        else if (senha[i] >= '0' && senha[i] <= '9') {
            tem_num=1;
        }
        else if (senha[i] >= 33 && senha[i] <= 47 || senha[i] >= 58 && senha[i] <= 64 || senha[i] >= 91 && senha[i] <= 96 || senha[i] >= 123 && senha[i] <= 126) {
            tem_simb=1;
        }
    i++;
    }
    
    i = 0;
    while (senha[i] != '\0') {
        i++;
        ver_de_qtd++;
    }
    
    if(ver_de_qtd >= 8) {
        printf("Quantidade de digitos: %d\n", ver_de_qtd);
        if (tem_lm) printf("A senha tem letras minusculas.\n");
        if (tem_lM) printf("A senha tem letras Maiusculas.\n");
        if (tem_num) printf("A senha tem Numeros.\n");
        if (tem_simb) printf("A senha tem Simbolos.\n");
        if(tem_lm == 1 && tem_lM == 1 && tem_num == 1 && tem_simb == 1) {
            printf("\nA senha informada é uma senha forte!");
        } else {
            printf("\nA senha informada não é uma senha forte!");
        }
        
    } else {
        printf("A senha precisa ter no minimo 8 caracteres.");
    }
    
}

int main()
{
//SELECIONAR A DIFICULDADE DOS EXERCICIOS

    int dificuldade, exercicio;    

    printf("***EXERCICIOS DE FUNÇOES***\n");
    printf(
    "\nSelecione a dificuldade\n"
    "\n"
    "1 = FACIL\n"
    "2 = INTERMEDIARIO\n"
    "3 = DIFICIL\n"
    "\nSelecione: ");
    scanf("%i", &dificuldade);
    system("clear");
    
    if (dificuldade >= 1 && dificuldade <=3) {

//SELECIONAR O EXERCICIO DA DIFICULDADE ESCOLHIDA
    
        switch (dificuldade) {
            case 1: {
                printf("\n***EXERCICIOS FACEIS***\n");
                printf("\nSelecione o exercicio (1 a 3): ");
                scanf("%i", &exercicio);
                system("clear");
                if (exercicio >= 1 && exercicio <=3) {
                    switch (exercicio) {
                        case 1: {
                            int num;
                            int res;
                            printf("Digite um numero: ");
                            scanf("%i", &num);
                            
                            res = numero_par_ou_impar (num);
                            
                            if(res == 0)
                                printf("O numero informado é par.");
                            else 
                                printf("O numero informado é impar.");
                        return 0;                            
                        }
                        break;
                        
                        case 2: {
                            float num1;
                            float num2;
                            char op;
                        
                            printf("Digite o primeiro numero: ");
                            scanf("%f", &num1);
                            
                            printf("Digite a operação (+, -, *, /): ");
                            scanf(" %c", &op);
                        
                            printf("Digite o segundo numero: ");
                            scanf("%f", &num2);
                            
                            float resultado_calc = calculadora (num1, num2, op);
                            
                            if (resultado_calc == -1 && (op == '/' || op != '+'|| op != '-'|| op != '*')) { 
                                return 0;
                            // CASO DE O RETORNO DE ERRO (-1) O CODIGO ABAIXO NÃO É EXECUTADO.
                            // PARA CONSERTAR O ERRO "Não é possivel dividir por 0A divisão entre 1.00 e 0.00 = 0.00" --> erro + resultado ao mesmo tempo
                            } else {
                                switch (op) {
                                
                                case '+': {
                                    printf("A soma entre %.2f e %.2f = %.2f", num1, num2, resultado_calc);
                                    return 0;
                                }
                                break;
                                
                                case '-': {
                                    printf("A subtração entre %.2f e %.2f = %.2f", num1, num2, resultado_calc);
                                    return 0;
                                }
                                break;
                                
                                case '*': {
                                    printf("A multiplicação entre %.2f e %.2f = %.2f", num1, num2, resultado_calc);
                                    return 0;
                                }
                                break;
                                
                                case '/': {
                                    printf("A divisão entre %.2f e %.2f = %.2f", num1, num2, resultado_calc);
                                    return 0;  
                                }
                                break;
                                }
                            }
                        }
                        break;
                        
                        case 3: {
                            int num1_M_ou_m, num2_M_ou_m;
                            
                            printf("Digite dois numeros: ");
                            scanf("%i %i", &num1_M_ou_m, &num2_M_ou_m);
                            
                            Maior_e_Menor (num1_M_ou_m, num2_M_ou_m);
                            return 0;
                        }
                        break;
                    }
                }
                else {
                    printf("Programa encerrado - Selecione uma opção valida.");
                    return 0;
                }
            }
            case 2: {
                printf("\n***EXERCICIOS INTERMEDIARIOS***\n");
                printf("\nSelecione o exercicio (1 a 5): ");
                scanf("%i", &exercicio);
                system("clear");
                if (exercicio >= 1 && exercicio <=5) {
                    switch (exercicio) {
                        case 1: {
                            int numero_somatorio;
                            printf("Digite o valor maximo para o somatorio: ");
                            scanf("%d", &numero_somatorio);
                            int resultado_somatorio = somatorio(numero_somatorio);
                            printf("O resultado do somatorio de 0 a %d e: %d", numero_somatorio, resultado_somatorio);
                            return 0;
                        }
                        break;
                        
                        case 2: {
                            int numero_fatorial;
                            printf("Digite o numero que deseja o fatorial: ");
                            scanf("%d", &numero_fatorial);
                            int resultado_fatorial = calc_fatorial(numero_fatorial);
                            printf("O fatorial de %d é: %d", numero_fatorial, resultado_fatorial);
                            return 0;
                        }
                        break;
                        
                        case 3: {
                    	    int termo;

                            printf("IMPRIMINDO A SEQUENCIA DE FIBONACCI\n");
                            printf("Digite o termo desejado maximo até 92: ");
                            scanf("%d", &termo);
                            
                            switch (termo) {
                                case 1: {
                                    printf("O primeiro termo é '0'");
                                    return 0;
                                }
                                break;
                                case 2: {
                                    printf("O segundo termo é '1'");
                                    return 0;
                                }
                                break;
                            }
                            
                            if (termo <= 0) {
                                printf("Digite um valor maior que '0'");
                                return 0;
                            }
                            if (termo >= 93) {
                                printf("O maximo é 92");
                                return 0;
                            }
                            
                            printf("0 1 "); //GAMBIARRA
                                
                            long long res = fibonacci (termo);
                            printf("\nO termo é %lld", res);
                            return 0;
                        }
                        break;
                        
                        case 4: {
                            int num;
    
                            printf("RODANDO - VERIFICADOR DE VALORES PALINDROMOS\nDigite um numero: ");
                            scanf("%d", &num);
                        
                            ver_palindromo(num)==num ? printf("É palindromo.") : printf("Não é palindromo");
                            return 0;
                        }
                        break;
                        
                        case 5: {
                            char senha[30];

                            printf("Digite a senha: ");
                            scanf("%s", senha);
                            
                            ver_senha(senha);
                            return 0;
                        }
                        break;
                    }
                } else {
                    printf("Programa encerrado - Selecione uma opção valida.");
                    return 0;
                }
            }
        
            case 3: {
                printf("\n***EXERCICIOS DIFICEIS***\n");
                printf("\nSelecione o exercicio (1 a 2): ");
                scanf("%i", &exercicio);
                system("clear");
                if (exercicio >= 1 && exercicio <=2) {
                    switch (exercicio) {
                        case 1: {
                            printf("Em andamento..");
                            return 0;
                        }
                        break;
                        
                        case 2: {
                                char CPF[12];

                                printf("Digite seu CPF (apenas numeros): ");
                                scanf("%11s", CPF);//%11s é para ler até o 11º digito do CPF oque for digitado apos é desconsiderado
                                
                                //Transforma os char em int
                                int CPFnum[11];
                                for(int i=0; i<11; i++) {
                                    CPFnum[i]=CPF[i]-'0'; 
                                }
                                
                                //Faz a multiplicação
                                int mult1=10;
                                int somaMult1=0;
                                for(int m1=0; m1<9; m1++) {
                                    somaMult1+=CPFnum[m1]*mult1;
                                    mult1--;
                                }
                                
                                //Caclula o primeiro digito verificador
                                int prim_dig_verif=somaMult1%11;
                                if(prim_dig_verif < 2) {
                                    prim_dig_verif=0;
                                } else {
                                    prim_dig_verif = 11 - prim_dig_verif;
                                }
                                
                                //Faz a multiplicação
                                int mult2=11;
                                int somaMult2=0;
                                for(int m2=0; m2<10; m2++) {
                                    somaMult2+=CPFnum[m2]*mult2;
                                    mult2--;
                                }
                                
                                //Caclula o segundo digito verificador
                                int seg_dig_verif=somaMult2%11;
                                if(seg_dig_verif < 2) {
                                    seg_dig_verif=0;
                                } else {
                                    seg_dig_verif = 11 - seg_dig_verif;
                                }
                                
                                //Verifica os ultimos 2 digitos comparados ao CPF informado
                                if(prim_dig_verif ==  CPFnum[9] && seg_dig_verif ==  CPFnum[10] ) {
                                    printf("CPF VALIDO");
                                } else {
                                    printf("CPF INVALIDO");
                                }
                                return 0;
                        }
                        break;
                                                    
                    } 
                } else {
                    printf("Programa encerrado - Selecione uma opção valida.");
                    return 0;
                }
            }
        }         
    } else {
        printf("Programa encerrado - Selecione uma opção valida.");
        return 0;
    }
}
