#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    printf("Enter the name: ");
    // fgets(name, sizeof(name), stdin);

    scanf("%99[^\n]", name)
    int length = strlen(name);
    printf("The length is %d.\n", length);

    // int length = 0;
    // for(int i=0; i < name[i] != '\0'; i++)
    // {
    //     if(name[i] != ' ')
    //     {
    //         char placement = name[i];
    //         length++;
    //         printf("The name is %c and The length is %d.\n", placement, length);
    //     }
    // }
    return 0;
}