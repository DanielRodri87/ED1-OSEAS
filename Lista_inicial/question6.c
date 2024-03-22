#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define M 100

char subtrai(char *s1, char *s2, char *result){
    int index = 0, count_realloc = 0;
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
}

int main() {
    char *s1, *s2, *result;
    s1 = (char *) malloc(M * sizeof(char));
    s2 = (char *) malloc(M * sizeof(char));
    result = (char *) malloc(M * sizeof(char));    

    printf("Informe o texto 1: ");
    scanf("%s", s1);
    
    printf("Informe o texto 2: ");
    scanf("%s", s2);

    subtrai(s1, s2, result);

    return 0;
}