#include <stdio.h>

int main(void)
{
    int a = 7;
    int b = 10;
    int c = 4;

    printf("Result: %d\n", b - c - a);
    printf("Result: %d\n", c + b -a);
    printf("Result: %d\n", b / a / c);
    printf("Result: %d\n", b / ( a % b ) % c);
    printf("Result: %d\n", (b * a) / ( a * c));
    return 0;
}