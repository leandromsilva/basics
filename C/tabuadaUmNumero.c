// Programa que imprime a tabuada de determinado n�mero
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
	printf("Digite a opera�o a ser feita\n");
	printf("[*] Multiplica��o [+] Soma [-] Subtra��o [/] Divis�o\n");
	scanf("%c", &operacao);
	printf("Digite o n�mero para ser multiplicado\n");
	scanf("%i", &numero);
	calculo(numero, operacao);
	
	system("pause");
	return 0;
}