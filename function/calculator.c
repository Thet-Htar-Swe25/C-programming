#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int get_number(void);
char get_operator(void);


int main (void)
{
    int num1, num2, result;
    char operation;
    
    while(1)
    {
        num1 = get_number();

        num2 = get_number();

        operation = get_operator();

        switch(operation)
        {
            case '+':
                result = add(num1, num2);
                break;

            case '-':
                result = substract(num1, num2);
                break;

            case '*':
                result = multiply(num1, num2);
                break;

            case '/':
                result = divide(num1, num2);
                break;
            
            default:
                printf("You put the wrong operation.\n");
        }

        printf("The result of the numbers %d and %d is %d.\n", num1, num2, result);
    
        char option;
        printf("Whould you like to continue(y/n)?: ");
        scanf(" %c", &option);

        if(option == 'y' || option == 'Y')
        {
            while(getchar() != '\n');
            continue;
        }
        else
        {
            break;
        }
    }
    return 0;
}

char get_operator(void)
{
    char operator;
    printf("Choose operator(+,-,*,/): ");
    scanf(" %c", &operator);
    return operator;
}

int get_number(void)
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    return num;
}

int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if(b == 0)
    {
        printf("Number couldn't be divisible by zero.\n");
        exit(1);
    }
    return a / b;
}