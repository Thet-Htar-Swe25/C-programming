#include <stdio.h>

int main(void)
{
    float fahr, total;
    int step, upper;
    
    printf("Enter the temperature in Fahrenheit: ");
    int input = scanf("%f", &fahr);

    while(input != 1)
    {
        printf("Error.Please enter a valid number.\n");
        getchar();
        printf("Enter the temperature in Fahrenheit: ");
        getchar();                         // need this , so scanf function doesn't take ENTER(\n) or \n from the previous line as an input.
        int input = scanf("%f", &fahr);    //Be aware with this statement // cannot do only scanf("%f", &fahr); - needs to put variable as well

        while(input == 1)
        {
            printf("Great!Now let's continue the next step.\n");
            printf("Enter the differences between temperature: ");
            getchar();
            int dif = scanf("%d", &step);

            while(dif != 1)
            {
                printf("Error.Please enter a valid number.\n");
                printf("Enter the differences between temperature: ");
                getchar();
                int dif = scanf("%d", &step);

                while(dif == 1)
                {
                    printf("Enter the final number: ");
                    int end = scanf("%d", &upper);

                    while(end != 1)
                    {
                        printf("Error.Enter a valid number.\n");
                        printf("Enter the final number: ");
                        getchar();
                        int end = scanf("%d", &upper);

                        while(end == 1)
                        {
                            while(fahr <= upper)
                            {
                                total = 5 * (fahr-32) / 9;
                                printf("%.3f fahrenheit = %.3f Celsius.\n", fahr, total);
                                fahr = fahr + step;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}