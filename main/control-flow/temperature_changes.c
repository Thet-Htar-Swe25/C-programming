#include <stdio.h>

int main(void)
{
    float F;
    printf("Enter value in Fahrenheit: ");
    float input = scanf("%f", &F);

    if (input == 1)
    {
        printf("Temperature in Fahrenheit is %.3f.\n", F);
        float total;
        total = (F-32)*5 / 9;
        printf("%.3f in Fahrenheit = %.3f in Celsius.\n", F, total);
    }
    else
    {
        printf("Error is detected.Please check your input again.\n");
    }

    return 0;
}