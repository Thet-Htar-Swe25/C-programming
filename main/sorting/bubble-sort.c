#include <stdio.h>

#define INDEX 100 //constant variable 
int ch;
int has_integer;
int count = 0;
int num = 0;

void getinteger(int NUMBERS[]);

void bubblesorting(int NUMBERS[]);

int main(void)
{
    int NUMBERS[INDEX] ={0};

    while(1)
    {
        printf("Enter your numbers with space( Press enter button at the end) : \n");
        getinteger(NUMBERS);
        bubblesorting(NUMBERS);

        char option;
        printf("Would you like to continue: ");
        scanf("%c", &option);

        if( option == 'y' || option == 'Y')
        {
            while(getchar() != '\n');
            // for(int a = 0; a < 100; a++)
            // {
            //     NUMBERS[a] = 0;
            // }
            continue;
        }
        else
        {
            break;
        }
    }
    return 0; 
}

void getinteger(int NUMBERS[])
{
    while(1)
    {
        ch = getchar();
        if(ch >= '0' && ch <= '9')
        {
            num = (num * 10) + (ch - '0');
            has_integer = 1;
        }
        else if(ch == ' ' || ch == '\n')
        {
            if(has_integer)
            {
                if(count < INDEX)
                {
                    NUMBERS[count++] = num;

                    num = 0;
                    has_integer = 0;

                    if(ch == '\n')
                    {
                        break;
                    }
                }
                else
                {
                    printf("You reached the maximum limit of the arrays.\n");
                }
            }
        }
    }

    for(int i = 0; i < count; i++)
    {
        printf("%d ", NUMBERS[i]);
    }
    printf("\n");
}

void bubblesorting(int NUMBERS[])
{
    int i;
    for(i = 0; i < count - 1; i++)
    {
        for(int j = 0; j < count - i - 1; j++)
        {
            if(NUMBERS[j] > NUMBERS[j+1])
            {
                int temp = NUMBERS[j];
                NUMBERS[j] = NUMBERS[j+1];
                NUMBERS[j+1] = temp;
            }
        }
    }
    
    printf("Sorted numbers: \n");
    for(int k = 0; k < count; k++)
    {
        printf("%d ", NUMBERS[k]);
    }
    printf("\n");
    count = 0;
}