#include <stdio.h>
#include <stdlib.h>

char get_operators(void);
int addition(int a, int b, int c);
int substruction(int a, int b, int c);
int multiplication(int a, int b, int c);
int division(int a, int b, int c);

int main(int argc, char * argv[])
{
    if ( argc != 5)
    {
        printf("Four arguments are requried.\n");
        return 1;
    }

    int first_num = atoi(argv[2]);
    int sec_num = atoi(argv[3]);
    int third_num = atoi(argv[4]);

    printf("Hello %s.\n", argv[1]);
    printf("There are %d arguments in the commandline.\n", argc);
    printf("Fist number = %d, Second number = %d, Third number = %d\n", first_num, sec_num, third_num);

    char operators = get_operators();
    int result;

    switch(operators)
    {
        case '+':
            result = addition(first_num, sec_num, third_num);
            break;
        
        case '-':
            result = substruction(first_num, sec_num, third_num);
            break;
        
        case '*':
            result = multiplication(first_num, sec_num, third_num);
            break;

        case'/':
            result = division(first_num, sec_num, third_num);
            break;

        default:
            printf("You put the erong operator.\n");
    }

    printf("Final result is %d.\n", result);
    return 0;
}

char get_operators(void)
{
    char choice;
    printf("Choose the operators: ");
    scanf(" %c", &choice);
    return choice;
}

int addition(int a, int b, int c)
{
    int sum = a + b + c;
    printf("Sum = %d\n", sum);
    return sum;
}

int substruction(int a, int b, int c)
{
    int substruct = a - b - c;
    return substruct;
}

int multiplication(int a, int b, int c)
{
    int multiply = a * b * c;
    return multiply;
}

int division(int a, int b, int c)
{
    if(b == 0 || c == 0)
    {
        printf("Denominator cannot be zero.\n");
        exit (1);
    }

    int divide = a / b / c;
    return divide;
}
