#include <stdio.h>
const int GLOBAL_SCOPE = 4;         // Global variable 

int main (void)
{
    int a = 7;                      // Variable for outer
    int i = 23;
    int k;
    {
        int i = 1;                  // Variable for the inner loop  

        // If you don't define that variable 'i' here , it will take the i value from the outer
        // and that will effect the final value of 'i' in printf function.

        printf("-----------------\n");
        for (i; i < 80; i *= 4)
        {
            int a = 1;
            int b = a + i;
            printf("i=%d\n", i);
            printf("b=%d\n", b);
            printf("GLOBAL_SCOPE=%d\n", GLOBAL_SCOPE);
        }
        printf("Loop is ended and i is %d\n", i);
        printf("-----------------\n");


        // Starting from here the rest of ' i ' value takes from the upper value ,where ' i ' ended as something


        for(int i = 1; i <= 400; k = i++)
        {
            printf("k=%d\n", k);
            printf("i=%d\n", i);
            printf("GLOBAL_SCOPE=%d\n", GLOBAL_SCOPE);
        }
        printf("The second loop ended here and i is %d.\n", i);
        printf("k=%d\n", k);
        printf("---------------------\n");
    }

    printf("------------------\n");
    printf("GLOBAL_SCOPE=%d\n", GLOBAL_SCOPE);
    printf("a=%d\n", a);
    printf("i=%d\n", i);
    printf("k=%d\n", k);
    printf("------------------\n");
    return 0;
}