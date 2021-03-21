//Programa que soma os primeros números primos, a quantidade é escolha do usuário

#include <stdio.h>
#include <locale.h>

int verifica_primo(int n) {
  int i, cont = 0;
  for(i = 2; i <= (n/2); i++) {
    if(n % i == 0) cont++; 
  }
  if(cont == 0)
  return n;
  else
  return 0;
};

int main(void) {
  int i = 0, soma = 0, j = 1, qtd_primos;
  setlocale(LC_ALL, "portuguese");
  printf("Digite a quantidade de números primos a serem somados\n");
  scanf("%d", &qtd_primos);
  while(i < qtd_primos){
    j++;
    if(verifica_primo(j) != 0){
        soma = soma + verifica_primo(j);
        i++;
      }
  }
  printf("%d", soma);
  return 0;
}
