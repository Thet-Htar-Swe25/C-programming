#include <stdio.h>

// function prototype
int add(int a, int b); // function declaration

int main(void)
{
    int num1, num2, sum;
    printf("This is a simple arithmetic program.\n");

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // function invocation or calling the function
    sum = add(num1, num2); // pass by value (copy of the value is passed to the function)

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

// function definition
int add(int a, int b) // function header
{
    printf("Inside the add function: a = %d, b = %d\n", a, b); // function body
    return a + b;                                              // function body
}