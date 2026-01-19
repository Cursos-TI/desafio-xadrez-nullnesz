#include <stdio.h>

// TORRE 
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// BISPO 
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moverBispo(casas - 1);
    }
}

// RAINHA 
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {

    // TORRE
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\n");

    // BISPO
    printf("Movimento do Bispo:\n");
    moverBispo(5);

    printf("\n");

    // RAINHA
    printf("Movimento da Rainha:\n");
    moverRainha(8);

    printf("\n");

    
    //cAVALO 
    
    // 2 pra cima e 1 pra direita

    int controle = 0;

    printf("Movimento do Cavalo:\n");

    while (controle < 1) {

        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }

        printf("Direita\n");
        controle++;
    }

    return 0;
}
