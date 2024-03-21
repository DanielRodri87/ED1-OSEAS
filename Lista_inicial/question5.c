
#include <stdio.h>

int main(){
    char vetor[300];
    printf("Digite a frase que você deseja escrever: ");
    gets(vetor);
    int i, j, cont, tamanho = 0;
    int ocorrencias[256] = {0};

    for (i = 0; vetor[i] != '\0'; i++)
    {
        if (vetor[i] != ' ')
        {
            ocorrencias[vetor[i]]++;
        }
    }

    for (i = 0; i < 256; i++)
    {
        if (ocorrencias[i] > 0)
        {
            printf("'%c' = %d\n", i, ocorrencias[i]);
        }
    }
}

