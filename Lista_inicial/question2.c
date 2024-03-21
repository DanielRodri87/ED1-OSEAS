#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void count_occurrences(int matrix[200][100], int occurrences[], int X) {
    int i, j;
    for (i = 0; i < 200; i++) {
        for (j = 0; j < 100; j++) {
            occurrences[matrix[i][j]]++;
        }
    }
}

void display_occurrences(int occurrences[], int X) {
    for (int i = 0; i <= X; i++) {
        if (occurrences[i] == 1) {
            printf("O número %d ocorreu 1 vez\n", i);
        } else if (occurrences[i] > 1) {
            printf("O número %d ocorreu %d vezes\n", i, occurrences[i]);
        }
    }
}

int main() {
    int matrix[200][100];
    int X, i, j;
    
    printf("Informe o valor máximo para os números na matriz: ");
    scanf("%d", &X);
    
    int occurrences[X+1];
    for (i = 0; i <= X; i++) {
        occurrences[i] = 0;
    }
    
    srand(time(NULL));
    for (i = 0; i < 200; i++) {
        for (j = 0; j < 100; j++) {
            matrix[i][j] = rand() % (X+1);
        }
    }
    
    count_occurrences(matrix, occurrences, X);
    
    display_occurrences(occurrences, X);
    
    return 0;
}
