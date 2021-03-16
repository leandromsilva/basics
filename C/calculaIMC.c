// Programa que calcula IMC
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	float peso, altura, IMC;
	
	printf("Digite seu peso\n");
	scanf("%f", &peso);
	printf("Digite sua altura (m,cm)\n");
	scanf("%f", &altura);
	
	IMC = peso/(altura*altura);
	printf("Seu IMC é - %f\n", IMC);
	
	if(IMC < 18.5) printf("Magreza\n");
	else if(IMC > 18.5 && IMC < 24.9) printf("Normal\n");
	else if(IMC > 24.9 && IMC < 30) printf("Sobrepeso\n");
	else if(IMC > 30 && IMC < 39.9) printf("Obesidade\n");
	else printf("Obesidade grave\n");
	system("pause");
	return 0;
}