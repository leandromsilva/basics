//Programa que soma nÃºmeros 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, qutd, cont, soma = 0;
	printf("Digite a quantidade de números para soma\n");
	scanf("%d", &qutd);
	system("cls");
	for(cont = 0; cont < qutd; cont++)
	{
		printf("Digite o %dº número\n", cont + 1);
		scanf("%d", &num);
		soma = soma + num;
	}
	printf("A soma de todos os números é : %d\n", soma);
	return 0;
}
