#include <stdio.h>

const int GLOBAL_VAR = 10; // global scope variable

int main(void)
{
    int i = 1;
    int a = 20;
    {
        // local scope for the inner loop
        int i;
        int a = 10;
        for (i = 0; i < 10; i++)
        {
            int a = 5; // local scope for the inner loop variable 'a'
            printf("-------------------------\n");
            printf("Inner a = %d!\n", a);
            printf("i = %d\n", i);
            printf("a + i = %d!\n", a + i);
            printf("GLOBAL_VAR = %d!\n", GLOBAL_VAR);
            printf("-------------------------\n");
        }
        printf("Loop finished and i = %d!\n", i);
        printf("Another Inner a = %d!\n", a);
        printf("GLOBAL_VAR = %d!\n", GLOBAL_VAR);
    }
    printf("Outer i = %d!\n", i);
    printf("Outer a = %d!\n", a);
    printf("GLOBAL_VAR = %d!\n", GLOBAL_VAR);
    return 0;
}