// Programa que imprime a tabuada de determinado número
#include <stdio.h>
#include <locale.h>

void calculo(int numero, char operacao) {
	int contador = 1, resultado, limite = 0;
	
	do {
		switch(operacao)
		{
			case '*': 
				resultado = (numero*contador);
				printf("%i %c %i = %i\n", numero, operacao, contador, resultado);
				break;
			case '+': 
				resultado = (numero+contador);
				printf("%i %c %i = %i\n", numero, operacao, contador, resultado);
				break;
			case '/': resultado = (numero*contador);
				printf("%i %c %i = %i\n", resultado, operacao, numero, contador);
				break;
			case '-': resultado = (contador+numero);
				printf("%i %c %i = %i\n", resultado, operacao, numero, contador);
				break;
		}
		contador++;
		limite++;
	} while(limite < 10);
}

int main() {
	setlocale(LC_ALL, "portuguese");
	int numero;
	char operacao;
	printf("Digite a operaço a ser feita\n");
	printf("[*] Multiplicação [+] Soma [-] Subtração [/] Divisão\n");
	scanf("%c", &operacao);
	printf("Digite o número para ser multiplicado\n");
	scanf("%i", &numero);
	calculo(numero, operacao);
	
	system("pause");
	return 0;
}