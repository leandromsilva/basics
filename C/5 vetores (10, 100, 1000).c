//Programa conta a quantidade de compara√ß√µes no m√©todo de ordena√ß√£o SelectionSort 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void ImprimirVetor(int v[], int t)
{
	int i;
	for (i = 0; i < t; i++)
	{
		printf(" %d ", v[i]);
	}
	printf(" \n \n ");
}

int Selecao(int v[], int t)
{
	int i, j, min, x, cont = 0;
	for(i = 0; i < t; i++)          
	{
		min = i;                
		for(j = i + 1; j < t; j++) 
		{
			if (v[j] < v[min])
			{
				min = j;         
				cont++;
			}		
		}
		x = v[min];                
		v[min] = v[i];
		v[i] = x;
	}
	return cont;
}

int Proc(int tam, int quant, int m)
{
	int i, vDados[tam], cont;
	if(quant <= 0) return 0;
	else
	{
		for (i = 0; i < tam; i++)	
		{
			vDados[i] = tam + (rand() % tam);
		}
	//	printf("\n-------------- Vetor de %d elementos n„o ordenado [%d] -----------------\n\n\n", tam, m);
	//	ImprimirVetor(vDados, tam); 
		
	//	printf("\n----------------- Vetor de %d elementos ordenado [%d] ------------------\n\n\n", tam, m);
		cont = Selecao(vDados, tam);
		printf(" Quantidade de comparaÁıes %d\n\n", cont);
	//	ImprimirVetor(vDados, tam);	
		return Proc(tam, quant - 1, m + 1);
		srand(time(NULL));
	}	
	return 0;
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	Proc(10, 5, 1);
	Proc(100, 5, 1);
	Proc(1000, 5, 1);
	system("pause");
	return 0;
}
