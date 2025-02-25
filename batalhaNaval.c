

// Desafio Batalha Naval - MateCheck
#include <stdio.h>

#define TAMANHO_TABULEIRO 10

// Função para exibir o tabuleiro
void exibirTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar o navio vertical
void posicionarNavioVertical(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x + i][y] = '3';  // '3' para representar a parte do navio vertical
    }
}

// Função para posicionar o navio horizontal
void posicionarNavioHorizontal(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[x][y + i] = '3';  // '3' para representar a parte do navio horizontal
    }
}

int main() {
    // Inicializar o tabuleiro com água (representada por 'O')
    char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 'O';  // 'O' significa água
        }
    }

    // Definir as coordenadas e tamanhos dos navios
    int xVertical = 2, yVertical = 3, tamanhoVertical = 4;
    int xHorizontal = 5, yHorizontal = 1, tamanhoHorizontal = 3;

    // Posicionar os navios no tabuleiro
    posicionarNavioVertical(tabuleiro, xVertical, yVertical, tamanhoVertical);
    posicionarNavioHorizontal(tabuleiro, xHorizontal, yHorizontal, tamanhoHorizontal);

    // Exibir as coordenadas dos navios
    printf("\nCoordenadas do Navio Vertical (3):\n");
    for (int i = 0; i < tamanhoVertical; i++) {
        printf("Coordenada (%d, %d)\n", xVertical + i, yVertical);
    }

    printf("\nCoordenadas do Navio Horizontal (3):\n");
    for (int i = 0; i < tamanhoHorizontal; i++) {
        printf("Coordenada (%d, %d)\n", xHorizontal, yHorizontal + i);
    }

    // Exibir o tabuleiro final
    exibirTabuleiro(tabuleiro);

    return 0;
}
