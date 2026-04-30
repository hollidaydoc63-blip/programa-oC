#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: \n");
    scanf("%c", &tipoComparacao);

    printf("Digite seu número (entre 1 e 100): \n");
    scanf("%d", &numeroJogador);

    printf("O número do computador é: %d\n e a do jogador é: %d\n", numeroComputador, numeroJogador);

    switch (tipoComparacao) {

    case 'M':
      printf("Você escolheu a opção maior.\n");
      resultado = numeroJogador > numeroComputador ? 1 : 0;
    break;

    case 'N':
      printf("Você escolheu a opção menor.\n");
      resultado = numeroJogador < numeroComputador ? 1 : 0;
    break;

    case 'I':
      printf("Você escolheu a opção igual.\n");
      resultado = numeroJogador == numeroComputador ? 1 : 0;
    break;

    default:
      printf("Opção de jogo inválida!\n");
    break;
}

   if (resultado == 1) {
    printf("Parabéns, você venceu!\n");
   } else {
    printf("Infelizmente, você perdeu!\n");

   }



     
}