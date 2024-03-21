#include <stdio.h>

int func(x, y)
{
    if (y == 0)
        return 1;

    else
        return x * func(x, y-1);
        

}

int main()
{
    int x1, y1, r;
    scanf("%d %d", &x1, &y1);

    r = func(x1, y1);
    printf("%d ^ %d = %d", x1, y1, r);

}