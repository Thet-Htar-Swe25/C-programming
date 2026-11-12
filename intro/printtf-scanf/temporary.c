#include <stdio.h>

int main(void)
{
    int class_no;
    char name1[50], name2[50];
    int age;
    
    printf("Enter your class number: ");
    scanf("%d", &class_no);

    getchar();
    printf("Type your surname and your first name: ");
    scanf("%s %s", name1, name2);

    printf("From class: %d.\n", class_no);
    printf("Surname: %s.\n", name1);
    printf("First name: %s.\n", name2);



    return 0;
}