#include <stdio.h>
#include <stdlib.h>

int reverse(int x, int *result) {
    if (x == 0) {
        return 0;
    }
    *result = (*result * 10) + (x % 10);
    reverse(x / 10, result);
}

int main() {
    int x, result = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    reverse(x, &result);

    printf("O reverso de %d é: %d\n", x,  result);

    return 0;
}
