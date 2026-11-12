#include <stdio.h>

int get_num1(void);
int get_num2(void);

int multiply(int x, int y)
{
    int result = x * y;
    return result;
}

int main(void)
{
    printf("Enter the first positive number: ");
    int num1 = get_num1();

    printf("Enter the second positive number: ");
    int num2 = get_num2();

    int result = multiply(num1, num2);

    printf("The result is %d.\n", result);
    return 0;
}

int get_num1(void)
{
    int temp1;
    int a = 0;

    while((temp1 = getchar() ) != '\n')
    {
        if(temp1 >= '0' && temp1 <= '9')
        {
            a = (a * 10) + (temp1 - '0');
        }
    }
    return a;
}

int get_num2(void)
{
    int temp2;
    int a = 0;

    while((temp2 = getchar() ) != '\n')
    {
        if(temp2 >= '0' && temp2 <= '9')
        {
            a = (a * 10) + (temp2 - '0');
        }
    }
    return a;
}