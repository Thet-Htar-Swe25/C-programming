#include <stdio.h>
#include <string.h>

int main(void)
{
    char name [20];
    int order, number, starter, lunch, dessert;

    printf("Enter your phone number in this following format(04....): ");
    int phone = scanf("%10d", &number);
    getchar();

    if(phone == 1)
    {
        printf("Enter your registeration name: ");
        int input = scanf("%19[^\n]", name);
        if(input == 1)
        {
            int result = strcmp(name, "Maries");
            if(result == 0)
            {
                printf("You reserved a couple table for September 23rd.\n");
                printf("Click anywhere to continue for odering in advanced.\n");
                getchar();

                printf("What would you like to order(Starter for 1, Lunch for 2 and Dessert for 3): ");
                scanf("%d", &order);

                switch(order)
                {
                    case 1:
                        printf("Starter.\n");
                        printf("What will be your Starter( choose numbers ): ");
                        scanf("%d", &starter);

                        switch (starter)
                        {
                            case 1:
                                printf("You put caviar to the list.\n");
                                break;
                            
                            case 2:
                                printf("You put garlic bread to the list.\n");
                                break;

                            case 3:
                                printf("You put salad to the list.\n");
                                break;
                        
                            default:
                                printf("You didn't put anything.\n");
                        }
                        break;

                    case 2:
                        printf("Lunch.\n");
                        printf("What would you like to order for lunch: ");
                        scanf("%d", &lunch);

                        switch(lunch)
                        {
                            case 1:
                                printf("You put roasted beef to the list.\n");
                                break;

                            case 2:
                                printf("You put seasoning lamb bbq to the list.\n");
                                break;

                            case 3:
                                printf("You put seafood boiled to the list.\n");
                                break;
                            
                            case 4:
                                printf("You put sushi to the list.\n");
                                break;

                            default:
                                printf("You didn't choose anything.\n");
                        }
                        break;

                    case 3:
                        printf("Dessert.\n");
                        printf("What whould you like to order for dessert: ");
                        scanf("%d", &dessert);

                        switch(dessert)
                        {
                            case 1:
                                printf("You put mint ice-cream to the lift.\n");
                                break;

                            case 2:
                                printf("You put waffle to the list.\n");
                                break;
                            
                            case 3:
                                printf("You put signature chocolate moose cake to the list.\n");
                                break;

                            default:
                                printf("You didn't order anything.\n");
                        }
                        break;
                    default:
                        printf("Choose only 1 , 2 or 3 to order.\n");
                }
            }
            else
            {
                printf("We cannot find your reservation.\n");
            }
        }
        else
        {
            printf("We cannot find your reservation.\n");
        }
    }
    else
    {
        printf("Please put the vaild format.\n");
    }

    return 0;
}