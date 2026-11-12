#include <stdio.h>

int main(void)
{
    char choice;
    do
    {
        float number1, number2;
        char sign;

        printf("Enter your first number: ");
        int result1 = scanf("%f", &number1);

        if(result1 == 1)
        {
            printf("Enter your second number: ");
            int result2 = scanf("%f", &number2);

            if(result2 == 1)

            {
                printf("Enter the sign: ");
                int signs = scanf(" %c", &sign);

                if(signs == 1)
                {
                    float result;
                    if(sign == '+')
                    {
                        result = number1 + number2;
                    }
                    else if(sign == '-')
                    {
                        result = number1 - number2;
                    }
                    else if(sign == '*')
                    {
                        result = number1 * number2;
                    }
                    else if(sign == '/')
                    {
                        result = number1 / number2;
                    }
                    else
                    {
                        printf("Your input is wrong.\n");
                        break;
                    }

                    printf("The outcome is %.4f.\n", result);

                    printf("Do you like to continue(y/n): ");
                    scanf(" %c", &choice);
                    while(getchar() != '\n');
                }
                else
                {
                    printf("Your input is invaild.\n");
                }
            }
            else
            {
                printf("Your input is invaild.\n");
            }
        }
        else
        {
            printf("Your input is invaild.\n");
        }
    }
    while(choice == 'y' || choice == 'Y');

    printf("Thanks for using our program.\n");
    return 0;
}