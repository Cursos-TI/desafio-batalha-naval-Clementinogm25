#include <stdio.h>

#define TAMANHO_TABULEIRO 10 // Define o tamanho do tabuleiro como 10x10
#define TAMANHO_NAVIO 3 // Define o tamanho de cada navio como 3

int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]; // Declara a matriz que representa o tabuleiro

// Função para inicializar o tabuleiro com água (0)
void inicializarTabuleiro() {
    // Percorre cada linha do tabuleiro
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        // Percorre cada coluna do tabuleiro
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0; // Define a posição como água (0)
        }
    }
}

// Função para posicionar um navio no tabuleiro
void posicionarNavio(int linha, int coluna, int orientacao) {
    // linha: linha inicial do navio
    // coluna: coluna inicial do navio
    // orientacao: 0 para horizontal, 1 para vertical

    // Verifica se a orientação é horizontal
    if (orientacao == 0) {
        // Percorre as posições do navio (tamanho 3)
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha][coluna + i] = 3; // Marca a posição com 3 (navio)
        }
    } else { // Se a orientação for vertical
        // Percorre as posições do navio (tamanho 3)
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha + i][coluna] = 3; // Marca a posição com 3 (navio)
        }
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro() {
    // Percorre cada linha do tabuleiro
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        // Percorre cada coluna do tabuleiro
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da posição (0 ou 3)
        }
        printf("\n"); // Muda de linha após imprimir cada linha do tabuleiro
    }
}

int main() {
    inicializarTabuleiro(); // Inicializa o tabuleiro com água

    // Posicionando os navios (coordenadas e orientação definidas diretamente no código)
    posicionarNavio(2, 3, 0); // Navio horizontal na linha 2, coluna 3
    posicionarNavio(5, 1, 1); // Navio vertical na linha 5, coluna 1

    exibirTabuleiro(); // Exibe o tabuleiro com os navios posicionados

    return 0; // Indica que o programa terminou com sucesso
}
