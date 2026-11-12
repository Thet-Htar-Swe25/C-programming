#include<stdio.h>

int add(int a, int b);

int main(void)
{
    int num1, num2, sum;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = add(num1, num2);

    printf("Num1: %d, Num2: %d and the sum is %d", num1, num2, sum);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}