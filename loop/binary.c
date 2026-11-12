#include <stdio.h>

int main(void)
{
    int decimal;
    printf("Enter number in decimal form: ");
    scanf("%d", &decimal);

    int input = decimal;

    int binary[30];
    int i;
    for(i = 0; decimal != 0; i++)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        printf("placement i = %d // Decimal %d = Binary %d\n", i, decimal, binary[i]);
    }
    printf("i = %d\n", i);

    printf("Decimal number %d = Binary number ", input);
    
    for(i; i != 0; i--)
    {
        printf("%d", binary[i-1]);
    }

    // int j = 0;
    // int reversed[30];
    // for(i; i != 0; i--)
    // {
    //     int b = i - 1;
    //     printf("b = %d\n", b);
    //     reversed[j] = binary[b];
    //     printf("j = %d, i = %d, Binary %d = previous binary %d\n", j, i, reversed[j], binary[b]);
    //     j++;
    // }
    
    // printf("Decimal %d = Binary ", input);
    // for(int k = 0; k < j; k++)
    // {
    //     printf("%d", reversed[k]);
    // }
    return 0;
}