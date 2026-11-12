#include <stdio.h>

int main(void)
{
    int a = 6; 
    int b = 9;
    int c = 18;

    printf("Result : %d\n", a * b + c);
    printf("Result: %d\n", b / a - c);
    printf("Result: %d\n", a * b / c);
    printf("Result: %d\n", (a - c)* c);
    printf("Result: %d\n",b / (a * b));
    printf("Result: %d\n", a + b - c);
    printf("Result: %d\n", (b % c) * a);

    return 0;
}