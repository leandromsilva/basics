//Programa que calcula média de números 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int cont, num, qutd;
	float soma = 0;
	printf("Digite a quantidade de n�meros a serem somados\n");
	scanf("%d", &qutd);
	system("cls");
	for(cont = 0; cont < qutd; cont++)
	{
		printf("Digite o %d� n�mero\n", cont + 1);
		scanf("%d", &num);
		soma = soma + num;
	}
	printf("A m�dia � : %.2f", soma/qutd);
	return 0;
}
