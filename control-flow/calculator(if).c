#include  <stdio.h>

int main(void)
{
    char name[50]; 
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello, %s", name);

    printf("--------------------------\n");
    printf("Welcome to the calculator program.\n");
    printf("--------------------------\n");

    int num1, num2, total;
    printf("Enter your first number: ");
    scanf("%d", &num1);
    printf("Enter your second number: ");
    scanf("%d", &num2);

    char operation;
    printf("Choose the operation (+,-,*,/): ");
    scanf(" %c", &operation);

    if(operation == '+')
    {
        total = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, total);
    }
    else if(operation == '-')
    {
        total = num1 - num2;
        printf("%d + %d = %d\n", num1, num2, total);
    }
    else if(operation == '*')
    {
        total = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, total);
    }
    else if(operation == '/')
    {
        if(num2 != 0)
        {
            total = num1 / num2;
            printf("%d / %d = %d\n", num1, num2, total);
        }
        else
        {
            printf("Error: cannot be divided by zero.\n");
        }
    }
    else
    {
        printf("Error: wrong operator.\n");
    }



    return 0;

}