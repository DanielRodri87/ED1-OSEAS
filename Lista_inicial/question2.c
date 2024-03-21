#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 200
#define N 100

void count_occurrences(int matrix[M][N], int occurrences[], int X) {
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            occurrences[matrix[i][j]]++;
        }
    }
}

void display_occurrences(int occurrences[], int X) {
    int i;
    for (i = 0; i <= X; i++) {
        if (occurrences[i] == 1) {
            printf("O número %d ocorreu 1 vez\n", i);
        } else if (occurrences[i] > 1) {
            printf("O número %d ocorreu %d vezes\n", i, occurrences[i]);
        }
    }
}

int main() {
    int matrix[M][N];
    int X, i, j;
    
    printf("Informe o valor máximo para os números na matriz: ");
    scanf("%d", &X);
    
    // Inicializa o vetor de ocorrências com zeros
    int occurrences[X+1];
    for (i = 0; i <= X; i++) {
        occurrences[i] = 0;
    }
    
    // Preenche a matriz aleatoriamente
    srand(time(NULL));
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            matrix[i][j] = rand() % (X+1);
        }
    }
    
    // Conta as ocorrências
    count_occurrences(matrix, occurrences, X);
    
    // Exibe as ocorrências
    display_occurrences(occurrences, X);
    
    return 0;
}
