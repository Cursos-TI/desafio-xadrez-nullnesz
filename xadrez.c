#include <stdio.h>

int main() {

    // movimento da TORRE
    // anda 5 casas pra direita usando for

    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // movimento do BISPO
    // anda na diagonal cima + direita
    // usando while

    int casasBispo = 5;
    int contBispo = 0;

    printf("Movimento do Bispo:\n");

    while (contBispo < casasBispo) {
        printf("Cima Direita\n");
        contBispo++;
    }

    printf("\n");

    // movimento da RAINHA
    // anda 8 casas pra esquerda
    // usando do while

    int casasRainha = 8;
    int contRainha = 0;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contRainha++;
    } while (contRainha < casasRainha);

    return 0;
}
