//Programa que soma somente números positivos

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int qutd, soma = 0;
	printf("Digite a quantidade de n�meros para soma\n");
	scanf("%d", &qutd);
	system("cls");
	soma = (qutd + 1) * qutd / 2;
	printf("A soma de todos os n�meros � : %d\n", soma);
	return 0;
}
