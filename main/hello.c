#include <stdio.h>
int main(void)
{
    char name[] = "Maries";
    int age = 21;

    printf("Hello, world \n");
    printf("My name is %s and I am %d years old.\n",name,age);
    return 0;
}


#include <stdio.h>

int main(void)
{
    char name[] = "Maries";
    int age = 21;

    printf("My name is %s and I am %i years old.\n", name, age);
    return 0;
}


#include <stdio.h>

int main (void)
{
   char name[20];
   float GPA;
   
   printf("Enter your name: ");
   scanf("%s", name);

   printf("Enter your GPA: ");
   scanf("%f", &GPA);

   printf("%s got the %f GPA in the final exam.\n", name, GPA);
   return 0;
}


#include <stdio.h>

int main(void)
{
    float number = 255.55555;
    int age = 12;
    char name = 'a';
    char nimi[] = "Maries";
    printf("interger %+04d.\n", age);
    printf("interger %+4i.\n", age);
    printf("double [%+7.4f].\n", number);
    printf("double %7.4e.\n", number);
    printf("double %+7.5g.\n", number);
    printf("octal %o.\n", age);
    printf("hex %x.\n", age);
    printf("unsinged %u.\n",age);
    printf("pointer %p.\n", number);
    printf("%c\n", name);
    printf("%s\n", nimi);
    return 0;
}


#include <stdio.h>

int main(void)
{
    char name[20];
    printf("What is your name?: ");
    scanf("%s, name");

    printf("My name is %s.\n", name);
    return 0;
}



