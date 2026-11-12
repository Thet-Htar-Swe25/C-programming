#include <stdio.h>

int main(void)
{
    char name[] = "Maries";
    char n = 'm';
    int number = 21;
    float number1 = 21.55;
    double d_number = 200000000021.45625826;

    printf("%s.\n", name);
    printf("%9s.\n", name);
    printf("%c.\n", n);
    printf("%4c.\n", n);
    printf("%d.\n", number);
    printf("%-4d.\n", number);
    printf("%04d.\n", number);
    printf("%+5d.\n", number);
    printf("%i.\n", number);
    printf("%8.1f.\n", number1);
    printf("%+09.1f.\n", number1);
    printf("%.5f.\n", number1);
    printf("%u.\n", number);
    printf("%e.\n", number1);
    printf("Testing: %8g\n", d_number);
    printf("%o.\n", number);
    printf("%#o.\n", number);
    printf("%x.\n", number);
    printf("%X.\n", number);
    printf("%#x.\n", number);
    printf("%p.\n", number);
    printf("%p.\n", number1);
    printf("Address: %d\n", &number);

    return 0;
}