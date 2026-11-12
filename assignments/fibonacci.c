#include <stdio.h>

void give_backresult(int a, int num1, int num2);

int input(void);
char get_option(void);

int main(void)
{
    while(1)
    {
        int n = input();

        int temp1 = 0;
        int temp2 = 1;

        give_backresult(n, temp1, temp2);

        char option = get_option();
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

int input(void)
{
    int input;
    printf("Enter your number(n) in F_n: ");
    scanf("%d", &input);
    return input;
}

char get_option(void)
{
    char option;
    printf("Would you like to continue?: ");
    scanf(" %c", &option);
    return option;
}

void give_backresult(int a, int num1, int num2)
{
    if(a == 0)
    {
        printf("F0 = %d\n", num1);
    }
    else if(a == 1)
    {
        printf("F1 = %d\n", num2);
    }
    else
    {
        printf("F0 = %d\n", num1);
        printf("F1 = %d\n", num2);

        for(int i = 2; i <= a; i++)
        {
            int result = num1 + num2;
            num1 = num2;
            num2 = result;
            printf("F%d = %d\n", i, result);
            // printf("Temp_1 = %d\n", temp_1);
            // printf("Temp_2 = %d\n", temp_2);
        }
    }
}