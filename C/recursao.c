//Programa que calcula média, soma e soma de positivos usando funções recursivas

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media(int qutd)
{
	int num;
	if(qutd <= 0) return 0;
	else
	{
		printf("Digite o n�mero\n");
		scanf("%d", &num);
		return media(qutd - 1) + num;
	}	
}

int soma(int qutd)
{
	int num;
	if(qutd <= 0) return 0;
	else
	{
		printf("Digite o número\n");
		scanf("%d", &num);
		return soma(qutd - 1) + num;
	}
}

int somapositivo(int qutd)
{
	if(qutd <= 0) return 0;
	else return qutd + somapositivo(qutd - 1);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	int opcao, qutd;
	printf("Menu:\t1: M�dia\t2: Soma de numeros dados\t3: Soma de positivos\n");
	scanf("%d", &opcao);
	system("cls");
	switch(opcao)
	{
		case 1: 
			printf("Digite a quantidade de n�meros\n");
			scanf("%d", &qutd);
			system("cls");
			printf("A média é : %.2f", media(qutd)/qutd);
		break;
		case 2:
			printf("Digite a quantidade de n�meros\n");
			scanf("%d", &qutd);
			system("cls");
			printf("A soma de todos os n�meros é : %d\n", soma(qutd));
		break;
		case 3:
			printf("Digite a quantidade de n�meros\n");
			scanf("%d", &qutd);
			system("cls");
			printf("A soma de todos os n�meros é : %d\n", somapositivo(qutd));
		break;
	}
	return 0;
}
