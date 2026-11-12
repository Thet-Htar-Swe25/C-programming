#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(void)
{
    int n;
    int result;
    printf("Enter your number: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("Factorial number : %d\n", result);

    return 0;
}

int factorial(int n)
{
    if(n < 0)
    {
        printf("Error. Negative numbers aren't acceptable.\n");
        exit(1);
    }
    else if( n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}