#include <stdio.h>

int main()
{

    int posicao_linha;
    int posicao_coluna;
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};

    char tabuleiro[10][10] = {
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'}
    };

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            /*
            printf("Indique em qual Linha posicionar o navio1: \n");
            scanf("%d", &posicao_linha);
            printf("Indique em qual Coluna posicionar o navio1: \n");
            scanf("%d", &posicao_coluna);
            */
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n"); // quebra linha
    }

    return 0;
}