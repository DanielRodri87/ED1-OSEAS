// # Escreva a função subtrai que recebe duas strings s1 e s2 (alocadas dinamicamente) e retorna uma
// # nova string (alocada dinamicamente do tamanho exato necessário) contendo os caracteres de s1 que
// # não ocorrem em s2. Por exemplo, se s1 é “abacadef” e s2 é “ae” a função deve retornar uma nova
// # string “bcdf”.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define M 100

int main() {
    char *s1, *s2, *result;
    s1 = (char *) malloc(M * sizeof(char));
    s2 = (char *) malloc(M * sizeof(char));
    result = (char *) malloc(M * sizeof(char));    

    int index = 0, count_realloc = 0;

    printf("Informe o texto 1: ");
    scanf("%s", s1);
    
    printf("Informe o texto 2: ");
    scanf("%s", s2);

    result[0] = '\0';

    for (int i = 0; i < strlen(s1); i++) {
        int found = 0; 
        for (int j = 0; j < strlen(s2); j++) {
            if (s1[i] == s2[j]) {
                found = 1;
                count_realloc++;
                break;
            }
        }
        result = (char *) realloc(result, (strlen(s1)-count_realloc) * sizeof(char));
        if (!found) {
            result[index++] = s1[i];
        }
    }

    
    result[index] = '\0';

    printf("%s\n", result);
    printf("Tamanho string reallocada: %d", strlen(s1) - count_realloc);

    return 0;
}
