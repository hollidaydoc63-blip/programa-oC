#include <stdio.h>

int main() {
    printf("### Bem-vindos ao Jogo de Tabuleiro: Xadrez ###\n");
    // A seguir terá demonstrações práticas de movimentações de peças do xadrez utilizando for, while, e do-while
    
    // Mover a Torre cinco casas para a direita
    printf("*** Torre se movimentará para a direita cinco casas ***\n");

    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção na qual a sua peça, que no caso do for foi escolhido Torre, irá se movimentar
    }
 
    printf("*** Bispo se movimentará cinco casas na diagonal para cima à direita ***\n");
    int i = 0;
    // Mover o Bispo cinco casas na diagonal para cima à direita, utilizando o while para executar o movimento
    while (i < 5) 
    {
        printf("Cima, Direita\n");
        i++;
    }
    i = 0;
    printf("*** Rainha se movimetará oito casas para a esquerda ***\n");
    // Mover a Rainha oito casas para a esquerda utilizando o do-wihile
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    printf("*** Cavalo se movimetará duas casas para baixo, e uma casa para a esquerda ***\n");
    // Mover o Cavalo duas casas para baixo e uma casa para a esquerda com loops aninhados, utilizando o for
    for ( int i = 2; i <= 2; i++) {

        for (int j = 1; j <= i; j++) {

            printf("Baixo\n");

        }

           printf("Esquerda\n");
    }

    return 0;

}