#include<stdio.h>
#include<stdlib.h>

int divide(int a, int b);

int main(void)
{
    int num1, num2;
    float result;
    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = divide(num1, num2);

    printf("Num1: %d, Num2: %d, Division: %.4f", num1, num2, result);

    return 0;
}

int divide(int a, int b)
{
    if(b == 0)
    {
        printf("Numeber couldn't be divisible by zero.\n");
        exit(1);
    }

    return a / b;
}