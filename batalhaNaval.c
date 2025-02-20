#include <stdio.h>

int main() {
    // Define o tamanho do tabuleiro
    int tabuleiro[10][10] = {0}; // 0 representa água, 1 representa navio

    // Posiciona o navio horizontalmente
    int navio_horizontal_x = 2;
    int navio_horizontal_y = 3;
    int tamanho_navio_horizontal = 3;

    for (int i = 0; i < tamanho_navio_horizontal; i++) {
        tabuleiro[navio_horizontal_x][navio_horizontal_y + i] = 1;
    }

    // Posiciona o navio verticalmente
    int navio_vertical_x = 5;
    int navio_vertical_y = 1;
    int tamanho_navio_vertical = 2;

    for (int i = 0; i < tamanho_navio_vertical; i++) {
        tabuleiro[navio_vertical_x + i][navio_vertical_y] = 1;
    }

    // Exibe as coordenadas dos navios
    printf("Navio Horizontal:\n");
    for (int i = 0; i < tamanho_navio_horizontal; i++) {
        printf("X: %d, Y: %d\n", navio_horizontal_x, navio_horizontal_y + i);
    }

    printf("\nNavio Vertical:\n");
    for (int i = 0; i < tamanho_navio_vertical; i++) {
        printf("X: %d, Y: %d\n", navio_vertical_x + i, navio_vertical_y);
    }

    return 0;
}
