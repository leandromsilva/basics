//Programa que soma somente nÃºmeros positivos

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int qutd, soma = 0;
	printf("Digite a quantidade de números para soma\n");
	scanf("%d", &qutd);
	system("cls");
	soma = (qutd + 1) * qutd / 2;
	printf("A soma de todos os números é : %d\n", soma);
	return 0;
}
