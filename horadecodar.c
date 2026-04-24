#include <stdio.h>

int main() {

    int idade;
    float altura;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    if (idade > 16){
        printf("Você tem a idade propícia para o jogo. \n");
    }else {
        printf("Você é menor de idade, não pode jogar este jogo! \n");

    }

    if (altura < 1.65){
        printf("Você não tem a altura adequada para entrar no jogo! \n");
    }else {
        printf("Você pode entrar. \n");
    }
}