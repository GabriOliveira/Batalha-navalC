#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // inicializa tudo com 0

    int navio1[3] = {3, 3, 3}; // navio horizontal
    int navio2[3] = {3, 3, 3}; // navio vertical
    int navio3[3] = {3, 3, 3}; // navio diagonal 
    int navio4[3] = {3, 3, 3}; // navio diagonal 

    // navio horizontal (linha 2, colunas 4-6)
    int pos1_linha = 2;
    int pos1_coluna = 4;
    for (int i = 0; i < 3; i++) {
        tabuleiro[pos1_linha][pos1_coluna + i] = navio1[i];
    }

    // navio vertical (linha 5-7, coluna 1)
    int pos2_linha = 5;
    int pos2_coluna = 1;
    for (int i = 0; i < 3; i++) {
        tabuleiro[pos2_linha + i][pos2_coluna] = navio2[i];
    }

    // Navio diagonal (linha e coluna aumentam)
    int pos3_linha = 0;
    int pos3_coluna = 0;
    for (int i = 0; i < 3; i++) {
        tabuleiro[pos3_linha + i][pos3_coluna + i] = navio3[i];
    }

    //navio diagonal (linha aumenta, coluna diminui)
    int pos4_linha = 0;
    int pos4_coluna = 9;
    for (int i = 0; i < 3; i++) {
        tabuleiro[pos4_linha + i][pos4_coluna - i] = navio4[i];
    }

    // exibir tabuleiro
    printf("Tabuleiro Batalha Naval:\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
