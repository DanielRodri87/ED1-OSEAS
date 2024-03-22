#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void c_oco(int x[200][100], int oco[], int value) {
    int i, j;
    for (i = 0; i < 200; i++) {
        for (j = 0; j < 100; j++) {
            oco[x[i][j]]++;
        }
    }
}

void view_oco(int oco[], int value) {
    for (int i = 0; i <= value; i++) {
        if (oco[i] == 1) {
            printf("O número %d ocorreu 1 vez\n", i);
        } else if (oco[i] > 1) {
            printf("O número %d ocorreu %d vezes\n", i, oco[i]);
        }
    }
}

int main() {
    int x[200][100];
    int value, i, j;
    
    printf("Informe o valor mávalueimo para os números na matriz: ");
    scanf("%d", &value);
    
    int oco[value+1];
    for (i = 0; i <= value; i++) {
        oco[i] = 0;
    }
    
    srand(time(NULL));
    for (i = 0; i < 200; i++) {
        for (j = 0; j < 100; j++) {
            x[i][j] = rand() % (value+1);
        }
    }
    
    c_oco(x, oco, value);
    
    view_oco(oco, value);
    
    return 0;
}
