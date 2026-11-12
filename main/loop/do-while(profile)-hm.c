#include <stdio.h>

int main(void)
{
    char name[20];
    char university[30];
    char class[10];
    int physics;
    int chemistry;
    int maths;
    char option; // be aware of the different scopes
    // if you're gonna put the variable in 'do{}' statement , it won't be possible to use in 'while' condition.

    do
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

        printf("Please type(y/n) if you would like to continue: ");
        scanf(" %c", &option);
        while(getchar() != '\n');
    }
    while(option == 'y'|| option == 'Y');

    printf("Thank you for using our program.\n");

    return 0;
}



