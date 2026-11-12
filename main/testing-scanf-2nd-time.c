#include <stdio.h>

int main(void)
{
    char name[20];
    char address[20];
    int age;
    char building;
    int room;


    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("The user name is %s", name);

    printf("Type your address: ");
    fgets(address, sizeof(address), stdin);
    printf("The user address is %s", address);

    printf("What is your age: ");
    scanf("%d", &age);
    printf("The user age is: %d.\n", age);

    getchar();
    printf("What is your building(a,b,c,etc): ");
    scanf("%c", &building);
    printf("House number: %c.\n", building);

    printf("Your room no: ");
    scanf("%d", &room);
    printf("Room number:%4d.\n", room);

    printf("%s lives at the %s, building %c, room %d. Age is %d.\n", name, address, building, room, age);
    return 0;
}