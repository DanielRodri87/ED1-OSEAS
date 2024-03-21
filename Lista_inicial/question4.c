#include <stdio.h>

void func(value) {
    if (value % 10 == 0)
        return 0;

    return func(value) % 10;
}

int main()
{
    int input_value, result;
    scanf("%d", &input_value);

    result = func(input_value);
    printf("O valor de %d eh: %d", input_value, result);
}
