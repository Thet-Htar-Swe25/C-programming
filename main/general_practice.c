#include <stdio.h>

int main(void)
{
    char name[50];
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);

    for(int i = 0; name[i] != '\0'; i++)
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }
    printf("Upper case %s\n", name);

    int length = 0;
    for(int i = 0; name[i] != '\0'; i++)
    {
        char placement = name[i];
        length++;
        printf("Character %c is in %d placement.\n", placement, length);
    }
    return 0;
}







// int length = 0;
// for(int i = 0; name[i] != '\0'; i++)
// {
//     if(name[i] != '\n' && name[i] != ' ')
//     {
//         char placement = name[i];
//         length++;
//         printf("Name %c is in %d placement\n", placement, length);
//     }
// }




// #include <stdio.h>
// const int COLUMN = 4;
// const int ROW = COLUMN + 1;

// int main(void)
// {
//     int i, j, s;
//     for(i = 0; i <= COLUMN; i++)
//     {
//         for(s = 1; s <= i; s++)
//         {
//             printf(" ");
//         }
//         for(j = ROW; j >= i + 1; j--)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
//     return 0;
// }


//------------------------------------------------------------------------------


// Fahr to Celsius
// #include <stdio.h>
// #include <stdlib.h>

// float Fahr(float Cel);
// float Finalcelsius(float Cel);

// int main(void)
// {
//     float Cel;
//     printf("Enter the temperature in Celsius: ");
//     scanf("%f", &Cel);

//     float Faherenheit = Fahr(Cel);
//     float Celsius = Finalcelsius(Cel);

//     printf("Faherenheit %2.2f = Celsius %2.2f\n", Faherenheit, Celsius);

//     return 0;
// }

// float Fahr(float Cel)
// {
//     float c = Cel;
//     float faherenheit, sum, i;
//     for(i = 0; i < 100; i += 10)
//     {
//         sum = c + i;
//         faherenheit = (sum * 9/5) + 32;
//         printf("Celsius %2.2f = Faherenheit %2.2f\n", sum, faherenheit);
//     }
//     printf("Celsius %2.2f = Faherenheit %2.2f.\n", sum, faherenheit);
//     return faherenheit;
// }

// float Finalcelsius(float Cel)
// {
//     float sum;
//     for(float i = 0; i < 100; i += 10)
//     {
//         sum = Cel + i;
//     }
//     return sum;
// }


//---------------------------------------------------------------------------------


// two max numbers
// #include <stdio.h>

// int number_1(int nums[], int length);
// int number_2(int nums[], int length, int max_1);

// int main(void)
// {
//     int nums [10] = {1,7,9,3,5,10,4,6,8,2};
//     int length = sizeof(nums) / sizeof(int);
//     int max_1 = number_1(nums, length);
//     int max_2 = number_2(nums, length, max_1);

//     printf("The 1st maximum number is %d.\n", max_1);
//     printf("The 2nd maximum number is %d.\n", max_2);
//     return 0; 
// }

// int number_1(int nums[], int length)
// {
//     int maximum_1 = nums[0];

//     for(int i = 1; i < length; i++)
//     {
//         if(nums[i] > maximum_1)
//         {
//             maximum_1 = nums[i];
//         }
//     }
//     return maximum_1;
// }

// int number_2(int nums[], int length, int max_1)
// {
//     int maximum_2 = nums[0];
//     printf("Max_1 = %d\n", max_1);
//     for(int i = 1; i < length; i++)
//     {
//         if(nums[i] != max_1 && nums[i] > maximum_2)   
//         {
//             maximum_2 = nums[i];
//         }
//         printf("nums[%d] = max_2 %d\n", i, maximum_2);
//     }
//     return maximum_2;
// }


//---------------------------------------------------------------------------


// Commandline + text to numbers argument
// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[])
// {
//     if(argc < 4)
//     {
//         printf("Three arguments are required.\n");
//         return 1;
//     }

//     printf("Hello! %s\n", argv[1]);

//     int num1 = atoi(argv[2]);
//     int num2 = atoi(argv[3]);

//     printf("Total is %d\n", num1 + num2);

//     for(int i = 0; i < argc; i++)
//     {
//         printf("Argument %d = %s\n", i, argv[i]);
//     }

//     return 0;
// }
