#include <stdio.h>

int main() {
    int numero1 = 40, numero2 = 60;
    int maior;

    numero1 > numero2 ? (maior = numero1) : (maior = numero2);

    if(numero1 > numero2){
        printf("O número maior é: %d", numero1);
    } else {
        printf("O número maior é: %d", numero2);
    }


}
