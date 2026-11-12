#include <stdio.h>
int main (void)
{
    int result;
    int a;
    for (a = 0; a < 20; result = a++)
    {
        printf("a = %d.\n", a);
        printf("Result = %d.\n", result);
    }
    printf("a = %d.\n", a);
    printf("Result = %d.\n", result);

    printf("a = %d.\n", a);
    printf("Result = %d.\n", result);

    return 0;
}
