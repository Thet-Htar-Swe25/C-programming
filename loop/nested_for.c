#include <stdio.h>
const int LINE = 3;
const int ALL = (LINE * 2) + 1;

int main(void)
{
    int i, j, k;

    for(i = 0; i <= ALL; i++)
    {
        int outerloop1 = LINE - i;
        int outerloop2 = ALL - (i + 1);

        if(i <= LINE)
        {
            for(j = 1; j <= outerloop1; j++)
            {
                printf(" ");
            }
            for(k = 1; k <= (i*2)+1; k++)
            {
                printf("*");
            }
        }
        else
        {
            for(j = 1; j <= i - LINE; j++ )
            {
                printf(" ");
            }
            for(k = 1; k <= (2 * outerloop2) + 1; k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}


// * from 1 to 5
// int main(void)
// {
//     for(int i = 1; i <= STAR; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//5 to 1 
//*****
//***
//* 
//( 1st way)
// for(int i = 1; i <= STAR; i++)
//     {
//         for(int j = STAR; j >= i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

// 2nd way
// for(int i = STAR; i >= 1 ; i--)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;


// *
// **
// ***
// **
// *
//  int i, j;
//     int STAR = 3;
//     int outer_loop = STAR + (STAR - 1); 
//     for(i = 1; i <= outer_loop; i++)
//     {
//         if(i <= STAR)
//         {
//             for(j = 1; j <= i; j++)
//             printf("*");
//         }
//         else
//         {
//             for(j = 1, j <= outer_loop - i + 1; j++)
//             // ( or ) for(j = outer_loop - i + 1; j >= 1; j--)
//             printf("*");
//         }
//         printf("\n");
//     }