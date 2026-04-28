#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
          srand(time(0));
          numeroSecreto = rand() % 10;
            printf("Digite um número de 0 a 9: ");
            scanf("%d", &palpite);
    if (numeroSecreto == palpite){
        printf("Você acertou!\n");
        printf("número secreto: %d\n", numeroSecreto);
    } else {
        printf("Você errou!\n");
        printf("número secreto: %d\n", numeroSecreto);
    }
    break;
        case 2:
          printf("A explicação das regras!\n");
          printf("Digite a opção relacionada as regras do jogo!\n");
          scanf("%d", &regras);
    switch (regras){

    }
    {
    
      case 3:
         printf("regra 1\n");
        break;
      case 4:
         printf("Regra 2\n");
        break;
      case 5:
         printf("Regra 3\n");
    default:
         printf("Opção inválida!\n");
        break;
    }
    }


    }











