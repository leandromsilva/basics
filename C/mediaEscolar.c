#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, nota3, nota4, media;
	char nomeAluno[10];
	printf("Digite o nome do aluno(a)\n");
	scanf("%s", nomeAluno);
	printf("Digite a primeira nota\n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota\n");
	scanf("%f", &nota2);
	printf("Digite a terceira nota\n");
	scanf("%f", &nota3);
	printf("Digite a quarta nota\n");
	scanf("%f", &nota4);
		
	media = (nota1 + nota2 + nota3 + nota4)/4;
	printf("O(a) aluno(a): %s teve média %.2f\n", nomeAluno, media);
	system("pause");
	return 0;
		
}
