//Programa que calcula a taxa interna de retorno financeiro de um projeto

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <conio.h>

#define MAX_ITERACAO 1000
#define PRECISAO 0.00000001

double calcularTIR(double fc[], int numFluxos, float tma)
{
	int i, j; 
	double antigo = 0.00;
	double novo = 0.00;
	double taxaNova = tma;
	double taxa = tma;
	double taxaMinima = tma;
	double taxaMaxima = 1000;
	double vpl = 0.0;
	double denom = 0.0;
	
	for (i=0; i<MAX_ITERACAO; i++) {
	  vpl = 0.0;
	
	  for (j=0; j<numFluxos + 1; j++) {
	     denom = pow((1 + taxa),j);
	     vpl = vpl + (fc[j]/denom);
	  }
	
	  if ((vpl > 0) && (vpl < PRECISAO))
	     break;
	  if (antigo == 0)
	     antigo = vpl;
	  else
	     antigo = novo;
	
	  novo = vpl;
	  if (i > 0) {
	     if (antigo < novo) {
	        if (antigo < 0 && novo < 0)
	           taxaMaxima = taxaNova;
	        else
	           taxaMinima = taxaNova;
	     }
	     else {
	        if (antigo > 0 && novo > 0)
	           taxaMinima = taxaNova;
	        else
	           taxaMaxima = taxaNova;
	     }
	  }
	  taxa = (taxaMinima + taxaMaxima) / 2;
	  taxaNova = taxa;
	}
	return taxa;
}

double calcularTIR(double fc[], int numFluxos, float tma);

int main(void)
{
	double fc[30];
	double tir = 0.00, tma = 0.01;
	int numFluxos, i, tir_final, atrat;
	setlocale(LC_ALL, "portuguese");
	
	printf("Bem-vindo a calculadora de TIR (Taxa Interna de Retorno).\n\n");
	printf("Digite a TMA (Taxa Mínima de Atratividade) (Número inteiro Ex: 11): ");
	scanf("%d", &atrat);
	
	printf("Digite o período de tempo (Valor inteiro): ");
	scanf("%d", &numFluxos);
	
	for (i = 0; i < numFluxos + 1; i++) {
	  if (i == 0) {
	     printf("Investimento Inicial: ");
	     scanf("%lf", &fc[i]);
	     if(fc[i] < 1) fc[i] = fc[i];
	     else fc[i] = fc[i]*(-1);
	  }
	  else {
	     printf("Fluxo de Caixa para Período (Ano) %d: ", i);
	     scanf("%lf", &fc[i]);
	  }
	  
	}
	tir = calcularTIR(fc, numFluxos, tma);
	
	printf("\nValor da TIR: %.2f%%\n", tir*100);
	tir_final = tir*100 + 1;
	if(tir_final > atrat) printf("O investimento é atrativo, já que ele renderia mais do que uma aplicação livre de risco.\n");
	else if(tir_final < atrat) printf("O investimento não é atrativo, pois sua rentabilidade é superada por um investimento com o mínimo de retorno já definido.\n");
	else if(tir_final == atrat) printf("O investimento não é bom e nem ruim, pois renderia a mesma coisa que uma taxa mínima livre de risco.\n");
	else printf("Não foi possível saber ser o investimento seria atrativo");
	
	system ("pause");
	
	return 0;
}