#include <stdio.h>

int main(void)
{
    char month[30];
    char input[] = 'march', 'april', 'may', 'june';
    printf("Enter your birth month in small letter: ");
    scanf("%s", month);

    switch(month)
    {
        case march || april:
            printf("You might be Pieces OR Aries OR Taurus.\n");
            break;
        
        case april || may:
            printf("You might be Aries OR Taurus OR Gemini.\n");
            break;
        
        case may || june:
            printf("You might be Taurus OR Gemini OR Cancer.\n");
            break;
        
        default:
            printf("Please check the other zodiac signs.\n");
    }
    return 0;
}