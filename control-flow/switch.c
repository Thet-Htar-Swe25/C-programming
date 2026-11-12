#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    switch(age)
    {
        case 11 ... 25:
            printf("You are just a teenager.\n");
            break;
        
        case 26 ... 55:
            printf("Just focus to find money.\n");
            break;
        
        case 56 ... 60:
            printf("It's okay you can rest now.\n");
            break;
        
        case 61 ... 80:
            printf("You're gonna die soon.\n");
            break;
        
        default:
            printf("Now you are dead.\n");
    }

    return 0;
}