#include <stdio.h>

int main() {

    
    // TORRE
    
    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    
    // BISPO
    
    int casasBispo = 5;
    int contBispo = 0;

    printf("Movimento do Bispo:\n");

    while (contBispo < casasBispo) {
        printf("Cima Direita\n");
        contBispo++;
    }

    printf("\n");

    
    // RAINHA
    
    int casasRainha = 8;
    int contRainha = 0;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contRainha++;
    } while (contRainha < casasRainha);

    printf("\n");

    
    // CAVALO
    
    // movimento em L
    // 2 pra cima e 1 pra direita
    // usando loops aninhados

    int movimentoDireita = 1;
    int controle = 0;

    printf("Movimento do Cavalo:\n");

    while (controle < movimentoDireita) {

        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }

        printf("Direita\n");
        controle++;
    }

    return 0;
}
