//Programa que soma números 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, qutd, cont, soma = 0;
	printf("Digite a quantidade de n�meros para soma\n");
	scanf("%d", &qutd);
	system("cls");
	for(cont = 0; cont < qutd; cont++)
	{
		printf("Digite o %d� n�mero\n", cont + 1);
		scanf("%d", &num);
		soma = soma + num;
	}
	printf("A soma de todos os n�meros � : %d\n", soma);
	return 0;
}
