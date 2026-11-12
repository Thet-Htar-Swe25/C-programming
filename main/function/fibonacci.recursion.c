#include <stdio.h>

int give_fibonacci(int n)
{
    if(n <= 1)
    {
        return n;
    }
    
    return give_fibonacci(n-1) + give_fibonacci(n-2);
}

int main(void)
{
    int scequence;
    printf("Enter the amount of scequence you would like to display: ");
    scanf("%d", &scequence);

    // printf("%d", give_fibonacci(scequence));

    for(int i = 0; i < scequence; i++)
    {
        printf("%d scequence number : ", i);
        printf("%d", give_fibonacci(i));
        printf("\n");
    }

    return 0;
}