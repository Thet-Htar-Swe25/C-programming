#include <stdio.h>

int main(void)
{
    float number1, number2, sum;

    printf("Enter two of your numbers: ");
    scanf("%f %f", &number1, &number2);

    sum = number1+ number2;
    printf("You enter %.3f and %.3f.\n", number1, number2);
    printf("The sum is %.2f.\n", sum);


    return 0;
}