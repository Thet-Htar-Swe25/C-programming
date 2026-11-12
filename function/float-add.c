#include <stdio.h>

float add(float a, float b);

int main(void)
{
    float num1 , num2, sum;
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = add(num1, num2);

    printf("Num1: %2.2f, Num2: %2.2f, Sum: %2.2f", num1, num2, sum);

    return 0;
}

float add(float a, float b)
{
    return a + b;
}