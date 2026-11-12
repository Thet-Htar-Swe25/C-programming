#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int MAX_NUMBERS = 100;

void getints()
{
    int numbers[MAX_NUMBERS];
    int count = 0;
    int ch;
    int num = 0;
    int has_digits = 0; // Tracks if we actually read any numbers

    // Read characters until newline
    while ((ch = getchar()) != '\n')
    {
        // ch = getchar();

        if (ch >= '0' && ch <= '9')
        {
            num = (num * 10) + (ch - '0');
            has_digits = 1;
            // printf("Building number: %d\n", num);
        }
        else if (ch == ' ' || ch == '\n')
        {
            if (has_digits)
            {
                if (count < MAX_NUMBERS)
                {
                    numbers[count++] = num;
                    // printf("Read number: %d & count: %d\n", num, count);
                    if (ch == '\n')
                    {
                        break; // Exit on newline after reading a number
                    }
                }
                else
                {
                    printf("Maximum number of integers reached.\n");
                    break;
                }
                num = 0;        // Reset for the next number
                has_digits = 0; // Reset digit tracking
            }
            // If it's just leading whitespace, keep skipping
        }
    }
    // Print the numbers if we found any
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", numbers[i]);
    }
    printf("\n");
}

int main(void)
{

    printf("Enter integers separated by spaces (press Enter to finish):\n");
    getints();
    printf("\n");

    return 0;
}




