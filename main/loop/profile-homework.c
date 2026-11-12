#include <stdio.h>

int main(void)
{
    char name[20];
    char university[30];
    char class[10];
    int physics;
    int chemistry;
    int maths;

    while(true)
    {
        printf("Insert your name: ");
        fgets(name, sizeof(name), stdin);

        printf("Which university you're currently attending right now: ");
        fgets(university, sizeof(university), stdin);

        printf("Which study group are you in: ");
        scanf("%9[^\n]", class);
    
        printf("Your mark in physics: ");
        scanf("%d", &physics);

        printf("Your mark in chemistry: ");
        scanf("%d", &chemistry);

        printf("Your mark in maths: ");
        scanf("%d", &maths);

        printf("--------------------\n");
        printf("Name: %s", name);
        printf("University: %s", university);
        printf("Student's study group: %s", class);
        printf("--------------------\n");
        printf("| Physics: %4d |\n", physics);
        printf("| Chemistry: %d |\n", chemistry);
        printf("| Maths: %6d |\n", maths);
        printf("--------------------\n");

        char option;
        printf("Please type(y/n) if you would like to continue: ");
        int next = scanf(" %c", &option);
        //while(getchar() != '\n'); // can put getchar() here instead
        if(next == 1)
        {
            if(option == 'y'|| option == 'Y')
            {
                while(getchar() != '\n'); // We can also use only getchar() , but it can only hold one single character , so no good for long leftover characters.
                continue;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    
    printf("Thanks for using our program.\n");

    return 0;
}