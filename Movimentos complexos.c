#include <stdio.h>

// Funções recursivas para a Torre, Bispo e Rainha
void moverTorre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

void moverBispo(int movimentosVerticais, int movimentosHorizontais) {
    if (movimentosVerticais == 0 || movimentosHorizontais == 0) return;
    printf("Cima, Direita\n");
    moverBispo(movimentosVerticais - 1, movimentosHorizontais - 1);
}

void moverRainha(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

int main() {
    // Movimento da Torre (5 casas para a direita) usando recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando recursividade
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 5);

    // Movimento da Rainha (8 casas para a esquerda) usando recursividade
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo (2 casas para cima e 1 para a direita) usando loops complexos
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) { // Duas casas para cima
        printf("Cima\n");
    }
    for (int j = 1; j <= 1; j++) { // Uma casa para a direita
        printf("Direita\n");
    }

    return 0;
}