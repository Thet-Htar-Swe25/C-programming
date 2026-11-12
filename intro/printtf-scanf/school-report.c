#include <stdio.h>

int main(void)
{
    char name[50];
    int age;
    char school[50];
    float GPA_score;
    int year;

    printf("Enter your student username: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    getchar();

    printf("Which school you applied?: ");
    scanf("%s", school);

    printf("Enter your GPA: ");
    scanf("%f", &GPA_score);

    printf("Year you applied to university: ");
    scanf("%d", &year);

    printf("\n");

    printf("School report card for first year student: \n");
    printf("\n");

    printf("---------------------------\n");
    printf("\n");

    printf("Student name : %6s", name);
    printf("Student age : %10d\n", age);
    printf("|University : %10s|\n", school);
    printf("|GPA : %17.1f|\n", GPA_score);
    printf("|Application year : %d|\n", year);

    printf("%s, age %d applied to the univeristy of %s in %d. %s got %f in first year.\n", name, age, school, year, name, GPA_score);

    return 0;
}