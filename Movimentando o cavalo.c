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

    // Movimento do Cavalo (2 casas para baixo e 1 para a esquerda) usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) { // Duas casas para baixo
        printf("Baixo\n");
    }
    int cavalo_movimento = 1;
    while (cavalo_movimento <= 1) { // Uma casa para a esquerda
        printf("Esquerda\n");
        cavalo_movimento++;
    }

    return 0;
}