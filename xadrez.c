#include <stdio.h>
// Utiizando recursividade para mover as peças de xadrez Torre, Bispo e Rainha
void moverTorre(int casas) {
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0){
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}




int main() {

    printf("*** Torre se movimentará para a direita cinco casas ***\n");
    moverTorre (5);

    printf("*** Bispo se movimentará cinco casas na diagonal para cima à direita ***\n");
    moverBispo (5);

    printf("*** Rainha se movimetará oito casas para a esquerda ***\n");
    moverRainha (8);

    printf("*** Cavalo se movimetará duas casas para baixo, e uma casa para a esquerda ***\n");
    // Mover o Cavalo duas casas para baixo e uma casa para a esquerda com loops aninhados, utilizando o for
    for ( int i = 2; i <= 2; i++) {

        for (int j = 1; j <= i; j++) {

            printf("Baixo\n");

        }

           printf("Esquerda\n");

    return 0;

    }
}