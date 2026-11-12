#include <stdio.h>

void modifyintegerbyvalue(int a)
{
    a = 100;
}

void modifyarray(int x[])
{
    x[0] = 6;
}

void modifyintegerbyreference(int *y)
{
    *y = 89;
}


int main(void)
{
    int a = 2;
    printf("Before modifying integer: %d\n", a);

    modifyintegerbyvalue(a);
    printf("After modifying integer : %d\n", a);

    printf("\n");

    int x[5] = {1,2,3,4,5};
    for(int i = 0; i < sizeof(x) / sizeof(int); i++)
    {
        printf("Before modifying array : %d\n", x[i]);
    }

    printf("\n");

    modifyarray(x);

    for(int i = 0; i < sizeof(x) / sizeof(int); i++)
    {
        printf("After modifying array : %d\n", x[i]);
    }

    printf("\n");

    int y = 5;
    printf("Before modifying integer : %d\n", y);

    modifyintegerbyreference(&y);

    printf("After modifying integer : %d\n", y);

    return 0;
}