
#include <stdio.h>
#include <stdlib.h>

int main(){
    char *vetor;
    vetor = (char *) malloc(100 * sizeof(char));
    printf("Digite a frase que você deseja escrever: ");
    gets(vetor);
    int i, j, c, tam = 0;
    int c_digits[256] = {0};

    for (i = 0; vetor[i] != '\0'; i++)
        c_digits[vetor[i]]++;

    for (i = 0; i < 256; i++)
    {
        if (c_digits[i] > 0)
        {
            printf("'%c' = %d\n", i, c_digits[i]);
        }
    }
}

