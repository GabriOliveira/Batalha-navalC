#include <stdio.h>

int main() {
    // Tabuleiro 10x10 inicializado com água (0)
    int tabuleiro[10][10] = {0};

    // Navios com tamanho 3
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3}; 

    // Posição inicial do navio1 (horizontal)
    int linha1 = 2;
    int coluna1 = 4;

    // Posição inicial do navio2 (vertical)
    int linha2 = 5;
    int coluna2 = 7;

    // navio1 na horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha1][coluna1 + i] = navio1[i];
    }

    // navio2 na horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha2 + i][coluna2] = navio2[i];
    }

    // Exibir o tabuleiro
    printf("Tabuleiro:\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
