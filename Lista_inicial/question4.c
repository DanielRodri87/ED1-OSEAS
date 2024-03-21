
#include <stdio.h>

int func(int x) {
    if (x < 100) 
        return x;
    else 
        return (x % 100) * 100 + func(x / 10);
}

int main()
{
    int input_value, result;
    scanf("%d", &input_value);

    result = func(input_value);
    printf("O valor de %d invertido eh: %d", input_value, result);
}