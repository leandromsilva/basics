//Programa que calcula mÃ©dia de nÃºmeros 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int cont, num, qutd;
	float soma = 0;
	printf("Digite a quantidade de números a serem somados\n");
	scanf("%d", &qutd);
	system("cls");
	for(cont = 0; cont < qutd; cont++)
	{
		printf("Digite o %dº número\n", cont + 1);
		scanf("%d", &num);
		soma = soma + num;
	}
	printf("A média é : %.2f", soma/qutd);
	return 0;
}
