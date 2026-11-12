#include <stdio.h>

int main(void)
{
    int i = 1;
    while(i <= 3)
    {
        int j = 1;
        while(j <= i)
        {
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}




// *
// **
// ***
// ****
// *****
// int i = 1;
//     while(i <= 5)
//     {
//         int j = 1;
//         while(j <= i)
//         {
//             printf("*");
//             j++;
//         }
//         i++;
//         printf("\n");
//     }






// *****
// ****
// ***
// **
// *
// int i = 5;
//     while(i >= 1)
//     {
//         int j = 1;
//         while(j <= i)
//         {
//             printf("*");
//             j++;
//         }
//         i--;
//         printf("\n");
//     }
//     return 0;