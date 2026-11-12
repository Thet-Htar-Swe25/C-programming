#include <stdio.h>

int main(void)
{
    int a = 9;
    int b = 6.7;
    char x = 'B';

    char ch = a + '0';

    float result = (float) a/b;
    printf("int to float : %f\n", result);
    printf("implicit int: %d\n", b);
    printf("int to char_1: %c\n", (char)a + '\0');
    printf("int to char_2: %c\n", ch);
    printf("Char: %c\n", x += 6);

    return 0;
}