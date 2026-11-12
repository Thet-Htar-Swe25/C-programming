#include <stdio.h>

int main(void)
{
    int age;
    char name[20];
    float GPA;
    double weight;

    printf("What is your age: ");
    scanf("%d", &age);
    printf("Age: %d.\n", age);

    printf("Type your name: ");
    scanf("%s", name);
    printf("Name: %s.\n", name);

    printf("What is your GPA: ");
    scanf("%f", &GPA);
    printf("GPA: %3.1f.\n", GPA);

    printf("Enter your weight: ");
    scanf("%lf", &weight);
    printf("Weight of the user is %3.1lf kg.\n", weight);

    printf("%s got %3.1f GPA and %s is %d years old.\n", name, GPA, name, age);

    return 0;
}