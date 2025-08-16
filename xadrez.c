#include <stdio.h>

int main() {
    printf("--- Movimento da Torre (cinco casas para a direita) ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    printf("--- Movimento do Bispo (cinco casas para cima e direita) ---\n");
    int contador_bispo = 0;
    while (contador_bispo < 5) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    printf("\n");

    printf("--- Movimento da Rainha (oito casas para a esquerda) ---\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < 8);

    return 0;
}
