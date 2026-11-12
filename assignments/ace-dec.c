#include <stdio.h>

int num_array[10] = {0};
int length;
int count = 0;

int get_number(void)
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    return num;
}

void change_array(int NUM)
{
    for(int i = 0; NUM != 0; i++)
    {
        num_array[i] = NUM % 10;
        NUM = NUM / 10;
        count = i;
        //printf("%d", num_array[i]);
    }
    printf("\n");
    //printf("Count : %d", count);
}

void acending(void)
{
    //length = sizeof(num_array) / sizeof(int);
    int i;
    for(i = 0; i < count; i++)
    {
        for(int j = i; j >= 0; j--)
        {
            //printf("j = %d\n", j);
            if(num_array[j] > num_array[j+1]) // decending or acending relay on here 
            {
                int temp1 = num_array[j];
                num_array[j] = num_array[j+1];
                num_array[j+1] = temp1;
            }
            //printf("placement %d = number %d\n", j, num_array[j]);
        }
        //printf("i = %d\n", i);
        // if(num_array[i] > num_array[i+1])
        // {
        //     for(int j = i; j >= 0; j--)
        //     {
        //         //printf("j = %d\n", j);
        //         if(num_array[j] > num_array[j+1])
        //         {
        //             int temp1 = num_array[j];
        //             num_array[j] = num_array[j+1];
        //             num_array[j+1] = temp1;
        //         }
        //         //printf("placement %d = number %d\n", j, num_array[j]);
        //     }
        // }
    }
    //printf("placements in array %d\n", i);
    for(int k = 0; k <= i; k++)
    {
        printf("%d ", num_array[k]);
    }
}


int main(void)
{
    int num = get_number();
    change_array(num);
    acending();

    return 0;
}