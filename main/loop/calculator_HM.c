#include <stdio.h>

int main(void)
{
    float number1, number2;
    char sign;

    while (1)
    {
        printf("Enter your first number: ");
        int result1 = scanf("%f", &number1);
        while (getchar() != '\n');

        if (result1 == 1)
        {
            printf("Enter your second number: ");
            int result2 = scanf("%f", &number2);
            while (getchar() != '\n');

            if (result2 == 1)
            {
                printf("Enter the sign(+,-,*,/): ");
                int result3 = scanf(" %c", &sign);
                while (getchar() != '\n');

                if (result3 == 1)
                {
                    if (sign == '+')
                    {
                        float result = number1 + number2;
                        printf("The result is: %.8f\n", result);

                        char choice;
                        printf("Do you like to continue calculating?(y/n): ");
                        scanf(" %c", &choice);
                        while (getchar() != '\n');

                        if (choice == 'y' || choice == 'Y')
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    else if (sign == '-')
                    {
                        float result = number1 - number2;
                        printf("The result is: %.8f\n", result);

                        char choice;
                        printf("Do you like to continue calculating?(y/n): ");
                        scanf(" %c", &choice);
                        while (getchar() != '\n');

                        if (choice == 'y' || choice == 'Y')
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    else if (sign == '*')
                    {
                        float result = number1 * number2;
                        printf("The result is: %.8f\n", result);

                        char choice;
                        printf("Do you like to continue calculating?(y/n): ");
                        scanf(" %c", &choice);
                        while (getchar() != '\n');

                        if (choice == 'y' || choice == 'Y')
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    else if (sign == '/')
                    {
                        float result = number1 / number2;
                        printf("The result is: %.8f\n", result);

                        char choice;
                        printf("Do you like to continue calculating?(y/n): ");
                        scanf(" %c", &choice);
                        while (getchar() != '\n');

                        if (choice == 'y' || choice == 'Y')
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    else
                    {
                        printf("Please check your input again.\n");
                        break;
                    }
                }
                else
                {
                    printf("Please check your input again.\n");
                    continue;
                }
            }
            else
            {
                printf("Please check your input again.\n");
                continue;
            }
        }
    }
    printf("Thanks for using our program.\n");
    return 0;
}