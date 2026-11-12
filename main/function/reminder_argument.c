#include <stdio.h>

float remain(int a, int b);

int main (int argc, char*argv[])
{
    if (argc < 2)
    {
        printf("Error!. You need to put two files.\n");
        return 1;
    }

    printf("Hello, %s\n", argv[1]);

    int num1, num2;
    float reminder;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    reminder = remain(num1, num2);

    printf("The reminder of %d and %d = %2.2f\n", num1, num2, reminder);

    for(int i = 0; i < argc ; i++)
    {
        printf("Argument %d = %s", i, argv[i]);
        printf("\n");
    }

    return 0; 
    
}

float remain(int a, int b)
{
    return (a % b);
}