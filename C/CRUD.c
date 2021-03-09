#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#define arquivo "database.db"

FILE *file;

struct tabela_pessoa
{
    int idade, id;
    char deletado, nome[30];
};

struct tabela_pessoa pessoa;

void inicia_base()
{
    file = fopen(arquivo, "r+b");
    if(file == NULL)
	{
		file = fopen(arquivo, "w+b"); 
    }
}

void id_cont(struct tabela_pessoa *pessoa)
{
	struct tabela_pessoa aux;
	rewind(file);
	while(1)
	{
		if(fread(&aux, sizeof(aux), 1, file)!= 1)break;
		if(aux.id == pessoa->id)  
    	pessoa->id = aux.id + 1;
	}
}

void quiz(struct tabela_pessoa *pessoa)
{
    printf("Digite o nome\n"); 
	scanf("%s", pessoa->nome);
    printf("Digite a idade\n"); 
	scanf("%d", &pessoa->idade);
	pessoa->deletado = 'N';
    fflush(stdin);
}

void adiciona(struct tabela_pessoa pessoa)
{
    fseek(file, 0L, SEEK_END);
    fwrite(&pessoa, sizeof(struct tabela_pessoa), 1, file);
}

void apaga_base()
{
	char acao_drop;
	printf("Está ação irá excluir todos os dados\n");
	printf("Deseja continuar (s/n)?\n");
	scanf("%s", &acao_drop);
	if(acao_drop == ('s'))
	{
		fclose(file);
		pessoa.id = 0;
		file = fopen(arquivo, "w+b");
		printf("Base %s limpa!\n", arquivo);
		getch(); 
	}
}

void mostrar_pessoa(struct tabela_pessoa pessoa)
{
    printf("%d\t\t%s\t\t%d\n", pessoa.id + 1, pessoa.nome, pessoa.idade);
}

void mostrar_base()
{
	struct tabela_pessoa aux;
	printf("ID\t\tNome\t\tIdade\n");
	rewind(file);
	while(1)
	{
		if(fread(&aux, sizeof(aux), 1, file)!= 1)break;
		if(aux.deletado == 'S') continue; 
    	mostrar_pessoa(aux);
	}
	getch();
}

void inserir_cadastro()
{ 
    quiz(&pessoa);
    id_cont(&pessoa);
    adiciona(pessoa);  
}

void alterar_cadastro()
{
    int reg;
    mostrar_base(pessoa);
    printf("Digite a posição do registro\n");
    scanf("%d", &reg); 
    system("cls");
	fflush(stdin);
	if(fseek(file, (reg-1)*sizeof(struct tabela_pessoa), SEEK_SET)!=0)
	{
        printf("Erro de arquivo\n");
        getch();
        system("cls");
        return;
    }
    if(fread(&pessoa, sizeof(struct tabela_pessoa), 1, file)!= 1)
	{
        printf("Erro na leitura do registro\n");
        getch();
        system("cls");
        return;
    }
    if(pessoa.deletado == 'S')
	{
        printf("O Registro foi apagado\n");
        getch();
        system("cls");
        return;
    }
	printf("Alteração do cadastro\n");
    quiz(&pessoa);
    fseek(file, -(long) sizeof(struct tabela_pessoa), SEEK_CUR);
    fwrite(&pessoa, sizeof(struct tabela_pessoa), 1, file);
    fflush(file);
}

void excluir_cadastro()
{
    int reg;
    mostrar_base(pessoa);
    printf("Digite a posição do registro\n");
    scanf("%d", &reg); 
    system("cls");
	fflush(stdin);
	if(fseek(file, (reg-1)*sizeof(struct tabela_pessoa), SEEK_SET)!=0)
	{
        printf("Erro de arquivo\n");
        getch();
        system("cls");
        return;
    }
    if(fread(&pessoa, sizeof(struct tabela_pessoa), 1, file)!= 1)
	{
        printf("Erro na leitura do registro\n");
        getch();
        system("cls");
        return;
    }
    if(pessoa.deletado == 'S')
	{
        printf("Registro já apagado\n");
        getch();
        system("cls");
        return;
    }
	printf("Cadastro excluído\n");
	getch();
	system("cls");
	pessoa.deletado = 'S';
    fseek(file, -(long) sizeof(struct tabela_pessoa), SEEK_CUR);
    fwrite(&pessoa, sizeof(struct tabela_pessoa), 1, file);
    fflush(file);
}

void menu()
{
     int opcao;
     while(opcao != 0)
     {
         printf("1 - Inserir cadastro\n");
         printf("2 - Mostrar cadastro\n");
         printf("3 - Alterar cadastro\n");
         printf("4 - Excluir cadastro\n");
         printf("9 - Apagar dados do arquivo\n");
         printf("0 - Fechar programa\n");
         scanf("%d", &opcao);
         system("cls");
         switch(opcao)
         {
		 	case 1:
		 		inserir_cadastro();
		 		break;
		 	case 2: 
		 	   	mostrar_base();
		 		break;
		 	case 3:
		 		alterar_cadastro();
	 			break;
		 	case 4:
		 	   	excluir_cadastro();
	 			break;
		 	case 0: 
			 	 exit(0);
	 			break;
	 		case 9:
		 		apaga_base();
	 			break;
		 	default: 
				printf("Inválido\n");
		 		break;
		 }
		 system("cls");
     }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    inicia_base();
    menu();
    return 0;
}

    
