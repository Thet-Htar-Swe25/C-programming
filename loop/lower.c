#include <stdio.h>

int main(void)
{
    while(1)
    {
        char name[100];
        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        
        for(int i = 0; name[i] != '\0'; i++)
        {
            if(name[i] >= 'A' && name[i] <= 'Z')
            {
                name[i] = name[i] + 32;  // name yk storage place ko 32 pound dh 
            }
        }
        printf("Lower case: %s\n", name);

        char choice;
        printf("Would you like to continue: ");
        scanf(" %c", &choice);
        if(choice == 'y' || choice == 'Y')
        {
            while(getchar() != '\n');
            continue;
        }
        else
        {
            break;
        }
    }
    printf("Thank you for using our program.\n");
    return 0;
}