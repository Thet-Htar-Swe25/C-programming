#include <stdio.h>
#include <string.h>

char name[100]; // Do not know how to return the whole Array yet, so make it a global scope

void get_name(void);
void to_upper(void);


int main(void)
{
    get_name();
    to_upper();
    printf("Names in upper case : %s\n", name);

    return 0;
}

void get_name(void)
{
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
}

void to_upper(void)
{
    for(int i = 0; name[i] != '\0'; i++)
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }
}