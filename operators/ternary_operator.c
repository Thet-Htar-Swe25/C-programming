#include <stdio.h>

int main(void)
{

    int a = 20;
    int b = 14;
    int c = 40;

    int max = (a > b) ? ((a > c) ? a : c) : (( b > c )? b : c);
    printf("The max number is %d.", max);

    int min = (a > b) ? b : a;
    printf("\nThe min number is %d.", min);

    return 0;
}