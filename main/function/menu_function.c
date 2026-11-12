#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_dishes (void);
char get_name (void);
char get_option(void);

int main(void)
{
    char reservation[50];
    int menu, dessert, wine;
    char reply;

    printf("Welcome to our restaurant.\n");

    reservation = get_name();

    printf("Dishes of the month:\n");
    printf("1.Seafood salad\n");
    printf("2.Sushi & Sashimi\n");
    printf("3.Wagyu Beef / Sukiyaki & Shabu-Shabu\n");
    printf("4.Raman(Vegan/Shrimp/Beef/Pork)\n");

    menu = get_dishes();

    reply = get_option();

    printf("Dessert of the month:\n");
    printf("1.Matcha Parfait\n");
    printf("2.Mochi\n");
    printf("3.Taiyaki\n");
    printf("4.Taro rice ball\n");

    dessert = get_dishes();

    reply = get_option();

    printf("Drink of the month:\n");
    printf("1.Domaine de la Romanée-Conti Romanée-Conti\n");
    printf("2.Château Lafite Rothschild\n");
    printf("3.Dom Pérignon\n");
    printf("4.Penfolds Grange\n");

    wine = get_dishes();

    printf("%s order : %d , %d, %d", menu, dessert, wine);

    return 0;
}

char get_name(void)
{
    char name[50];
    while(1)
    {
        printf("Enter your reservation name: ");
        fgets(name, sizeof(name), stdin);

        int input = strcmp(name, "Maries");

        if(input != 0)
        {
            printf("Please enter your reservation name correctly.\n");
            get_option();
        }
        else
        {
            break;
        }
    }
    return name;
}

int get_dishes(void)
{
    int num;
    while(1)
    {
        printf("Enter your order number: ");
        scanf("%d", &num);
        while(getchar() != '\n');

        if(num < 1 || num > 4)
        {
            printf("Please enter your reservation number correctly.\n");
            get_option();
        }
        else
        {
            break;
        }
    }
    return num;
}

char get_option(void)
{
    char option;
    printf("Would you like to continue(y/n): ");
    scanf(" %c", &option);
    while(getchar() != '\n');

    if(option == 'y' || option == 'Y')
    {

    }
    else
    {
        printf("You stop the ordering process.");
        exit(1);
    }
    return option;
}

