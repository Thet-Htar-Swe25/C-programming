#include <stdio.h>

int NUM_ARRAY = 100;

void getint(void)
{
    int ch;
    int num = 0;
    int num_array[NUM_ARRAY];
    int count = 0; // to count how many numbers are there
    int has_digit = 0; // to check whether the userput numbers or not

    while(1)
    {
        ch = getchar(); // getchar() store single character , that's why no matter what numbers we put it only know the number of its digit base don ASCII table

        if(ch >= '0' && ch <= '9')
        {
            num = (num * 10) + (ch - '0');
            has_digit = 1;
        }
        else if(ch == ' ' || ch == '\n')
        {
            if(has_digit)
            {
                if(count < NUM_ARRAY)
                {
                    num_array[count++] = num;
                    // or num_array[] = num
                    // count ++;
                    if(ch == '\n')
                    {
                        break;
                    }
                }
                else
                {
                    printf("You have reached the limit of the array.\n");
                    break;
                }
                num = 0; 
                has_digit = 0;

            }
        }
    }

    for(int i = 0; i < count; i++)
    {
        printf("%d ", num_array[i]);
    }
}

int main (void)
{
    printf("Enter your numbers with space: ");
    getint();
    printf("\n");

    return 0;
}