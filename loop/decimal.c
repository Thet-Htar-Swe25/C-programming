#include <stdio.h>

int main(void)
{
    int binary_num[11] = {1024, 521, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    int input;
    int decimal = 0;
    int binary[11] ={0};


    printf("Enter the number in binary format: ");
    scanf("%d", &input);
    int num = input;

    for(int i = 10; input != 0; i--)
    {
        binary[i] = input % 10;
        input /= 10;
        printf("Binary %d and its placement %d\n", binary[i], i);
    }

    // for(int j = 0; j < 11; j++)
    // {
    //     printf("Binary %d and its placement %d\n", binary[j], j);
    // }

    for(int i = 0; i < 11; i++)
    {
        if(binary[i] == 1)
        {
            printf("decimal %d\n", decimal);
            decimal = decimal + binary_num[i];
            printf("Decimal %d\n", decimal);
        }
    }
    printf("Binary format %d = Decimal format %d\n", num, decimal);

    return 0;
}



// previous
// printf("Enter the number in binary format: ");
// scanf("%d", &input);


//     while(1)
//     {
//         printf("Enter the number in binary format: ");
//         int check = scanf("%d", &decimal);
//         getchar();
//         if(check == 1)
//         {
//             input[i] = decimal;
//             i++;
//         }
//         else
//         {
//             break;
//         }
//     }

//     for(int j = 10; i >= 0 ; j--)
//     {
//         reversed[j] = input[i];
//         printf("input %d = reversed %d\n", input[i], reversed[j]);
//         i--;
        
//     }

//     for(int k = 0; k < 11; k++)
//     {
//         if(reversed[k] = 1)
//         {
//             decimal = decimal + binary[k];
//         }
//     }

//     printf("= Decimal %d\n", decimal);
