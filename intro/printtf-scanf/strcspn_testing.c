#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';   // remove the newline 
    
    printf("The username is %s.\n", name);

    return 0;
}
