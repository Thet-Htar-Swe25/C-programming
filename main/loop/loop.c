#include <stdio.h>

int main(void)

{
    float fahr, cel;
    int step, upper;

    printf("Enter your number in fahrenheit: ");
    int input = scanf("%f", &fahr);

    if(input == 1)
    {
        printf("How many differences you want to make between the temperature: ");
        int dif = scanf("%d", &step);

        if(dif == 1)
        {
            printf("Till what temperature you want to calculate: ");
            int end = scanf("%d", &upper);

            if(end == 1)
            {
                while (fahr <= upper)
                {
                    cel = 5 * (fahr-32) / 9;
                    printf("Temperature in fahrenheit: %.3f.\n", fahr);
                    printf("Temperature in celsius: %.3f.\n", cel);
                    fahr = fahr + step;
                }
            }
            else
            {
               printf("Error is detected.Enter valid number.\n");
            }
        }
        else
        {
           printf("Error is detected.Enter valid number.\n");
        } 
    }
    else
    {
        printf("Error is detected.Enter valid number.\n");
    }
    
    return 0;
}