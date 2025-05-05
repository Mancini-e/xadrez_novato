#include <stdio.h>

int main() {
    // Definindo o número de casas a serem movidas
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Movimentação da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo: 5 casas na diagonal (cima e direita)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    return 0;
}