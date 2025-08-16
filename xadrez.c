#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

int main() {
    printf("--- Movimento da Torre (cinco casas para a direita) ---\n");
    moverTorre(5);

    printf("\n");

    printf("--- Movimento do Bispo (cinco casas para cima e direita com loops aninhados) ---\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Cima, Direita\n");
            break; 
        }
    }

    printf("\n");

    printf("--- Movimento da Rainha (oito casas para a esquerda) ---\n");
    moverRainha(8);

    printf("\n");

    printf("--- Movimento do Cavalo (duas casas para cima e uma para a direita) ---\n");

    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
            continue; 
        }

        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    return 0;
}
