#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int vendas1, vendas2, vendas3, vendas4, quantVendas;
	float media;
	char nomeVendedor[10];
	printf("Digite o nome do vendedor(a)\n");
	scanf("%s", nomeVendedor);
	printf("Digite o n�mero de vendas em janeiro\n");
	scanf("%i", &vendas1);
	printf("Digite o n�mero de vendas em fevereiro\n");
	scanf("%i", &vendas2);
	printf("Digite o n�mero de vendas em mar�o\n");
	scanf("%i", &vendas3);
	printf("Digite o n�mero de vendas em abril\n");
	scanf("%i", &vendas4);
	
	quantVendas = vendas1 + vendas2 + vendas3 + vendas4;
	media = quantVendas/4;
	
	printf("O(a) vendedor(a): %s vendeu %i no total e teve m�dia %.2f\n", nomeVendedor, quantVendas, media);
	system("pause");
	return 0;
		
}
