#include <stdio.h>



int main() {
    int n, i, j;
    int max_soma = 0;
    int tabuleiro[1000][1000];
    int soma_linhas[1000] = {0};
    int soma_colunas[1000] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &tabuleiro[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            soma_linhas[i] += tabuleiro[i][j];
            soma_colunas[j] += tabuleiro[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int soma = soma_linhas[i] + soma_colunas[j] - 2 * tabuleiro[i][j];
            if (soma > max_soma) {
                max_soma = soma;
            }
        }
    }

    printf("%d\n", max_soma);

    return 0;
}
