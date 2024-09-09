#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int tamanho, contador = 0, i, j, min_idx;
    long long int *vetor;
 
    // Lê o tamanho do vetor
    scanf("%d", &tamanho);
 
    // Aloca memória para o vetor
    vetor = (long long int *)malloc(sizeof(long long int) * tamanho);
 
    // Lê os elementos do vetor
    for (i = 0; i < tamanho; i++) {
        scanf("%lld", &vetor[i]);
    }
 
    // Vetor para armazenar as trocas realizadas
    int **trocas = (int **)malloc(tamanho * sizeof(int *));
    for (i = 0; i < tamanho; i++) {
        trocas[i] = (int *)malloc(2 * sizeof(int));
    }
 
    // Implementação do Selection Sort com registro de trocas
    for (i = 0; i < tamanho - 1 && contador < tamanho; i++) {
        min_idx = i;
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            // Faz a troca
            long long int troca = vetor[i];
            vetor[i] = vetor[min_idx];
            vetor[min_idx] = troca;
            // Registra a troca
            trocas[contador][0] = i;
            trocas[contador][1] = min_idx;
            contador++;
        }
    }
 
    // Imprime o número de trocas realizadas
    printf("%d\n", contador);
 
    // Imprime as trocas realizadas
    for (i = 0; i < contador; i++) {
        printf("%d %d\n", trocas[i][0], trocas[i][1]);
    }
 
    // Libera a memória alocada
    for (i = 0; i < tamanho; i++) {
        free(trocas[i]);
    }
    free(trocas);
    free(vetor);
 
    return 0;
}