#include <stdio.h>
int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Error");
        return 1;
    }
    printf("Hello, %s\n", argv[1]);

    for(int i = 0; i < argc; i++)
    {
        printf("Argument %d : %s\n", i, argv[i]);
    }
    return 0;
}