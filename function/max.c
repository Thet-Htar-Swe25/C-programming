#include <stdio.h>

void get_number(void);
void change_array(void);
void get_max(void);

long long num;
int num_array[50];
int max;

int main(void)
{
    get_number();
    change_array();
    get_max();

    printf("Maximum number : %d\n", max);

    return 0;
}

void get_number(void)
{
    printf("Enter ten numbers: ");
    scanf("%lld", &num);
}

void change_array(void)
{
    for(int i = 0; num != 0; i++)
    {
        if(num != 0)
        {
            num_array[i] = num % 10;
            num = num / 10;
        }
        // only the remainder could be zero but not the result until it reached the end.
        // so we do not need this step . 
        // else if(num == 0)  
        // {
        //     num_array[i] = num; 
        // }
        //printf("Array %d and plcement %d\n", num_array[i], i);
        
    }
}

void get_max(void)
{
    int length = sizeof(num_array) / sizeof(int);
    max = num_array[0];

    for(int i = 1; num_array[i] <= length; i++)
    {
        if(num_array[i] > max)
        {
            max = num_array[i];
        }
        //printf("Max number %d = placement %d\n", max, i);
    }
}