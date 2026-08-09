#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

void TrocarNumeros(int* n1, int* n2)
{
	int temp = *n1;

	*n1 = *n2;
	*n2 = temp;
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, ".UTF-8");

	int num1 = 1, num2 = 2;

	printf(
		"Antes da troca:\n"
		"Nº1: %d\n"
		"Nº2: %d\n",
		num1, num2
	);

	TrocarNumeros(&num1, &num2);

	printf(
		"\nDepois da troca:\n"
		"Nº1: %d\n"
		"Nº2: %d\n",
		num1, num2
	);

	system("pause");
	return 0;
}