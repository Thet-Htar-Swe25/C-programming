#include <stdio.h>

int main (int argc, char*argv[])
{
    if(argc < 2)
    {
        printf("Argument must be 2 fiels.\n");
        return 1; 
    }
    
    printf("Hello, %s.\n", argv[1]);

    for(int i = 0; i < argc; i++)
    {
        printf("Argument %d = %s\n", i, argv[i]);
    }
    return 0;
}