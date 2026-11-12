#include <stdio.h>

int main(void)
{
    char a = 'I';
    char b = 'V';
    char c = 'X';
    char d = 'L';
    char e = 'C';

    int j = 10;

    while(1)
    {
        int input; 
        printf("Enter your number: ");
        scanf("%d", &input);
        switch(input)
        {
            case 1 ... 10:
            if(input >= 1 && input <= 3)
            {
                for(int i = 1; i <= input; i++)
                {
                    printf("%c", a);
                }
                printf("\n");
            }
            else if(input == 4)
            {
                printf("%c%c\n", a,b);
            }
            else if(input == 5)
            {
                printf("%c\n", b);
            }
            else if( input >= 6 && input <= 8)
            {
                printf("%c", b);

                for(int i = 6; i <= input; i++)
                {
                    printf("%c", a);
                }
                printf("\n");
            }
            else if(input == 9)
            {
                printf("%c%c\n", a, c);
            }
            else if(input == 10)
            {
                printf("%c\n", c);
            }

            case 11 ... 20:
            {
                printf("%c", c);
                if(input >= j+1 && input <= j+3)
                {
                    for(int i = j+1; i <= input; i++)
                    {
                        printf("%c", a);
                    }
                    printf("\n");
                }
                else if(input == j+4)
                {
                    printf("%c%c\n", a,b);
                }
                else if(input == j+5)
                {
                    printf("%c\n", b);
                }
                else if( input >= j+6 && input <= j+8)
                {
                    printf("%c", b);

                    for(int i = j+6; i <= input; i++)
                    {
                        printf("%c", a);
                    }
                    printf("\n");
                }
                else if(input == j+9)
                {
                    printf("%c%c\n", a, c);
                }
                else if(input == 20)
                {
                    printf("%c\n", c);
                }
            }
        }
        char option;
        printf("Would you like to continue?: ");
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
    printf("Thank you so much for using our program.\n");
    return 0;
}