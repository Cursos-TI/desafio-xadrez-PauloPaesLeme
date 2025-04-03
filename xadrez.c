#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando while
    printf("\nMovimento do Bispo:\n");
    int bispo_movimento = 1;
    while (bispo_movimento <= 5) {
        printf("Cima, Direita\n");
        bispo_movimento++;
    }

    // Movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("\nMovimento da Rainha:\n");
    int rainha_movimento = 1;
    do {
        printf("Esquerda\n");
        rainha_movimento++;
    } while (rainha_movimento <= 8);

    return 0;
}
