#include <stdio.h>

int main(void)
{
    int age;
    int myanmar, english, math;
    char grade;
    char name[50];

    while (1)
    {
        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin); // Use fgets to read a string with spaces

        printf("Enter your age: ");
        scanf("%d", &age);

        printf("Enter your Myanmar score: ");
        scanf("%d", &myanmar);

        printf("Enter your English score: ");
        scanf("%d", &english);

        printf("Enter your Math score: ");
        scanf("%d", &math);

        printf("Enter your grade (A or B or something): ");
        scanf(" %c", &grade); // Add a space before %c to consume any leftover newline character

        printf("Your name is %sYour age is %d and your grade is %c\n", name, age, grade);
        printf("Your scores table: \n");
        printf("--------------------\n");
        printf("|Myanmar: %5d|\n", myanmar);
        printf("|English: %5d|\n", english);
        printf("|Math: %8d|\n", math);
        printf("--------------------\n");

        printf("Do you want to enter another record? (y/n): ");
        char choice;
        scanf(" %c", &choice); // Add a space before %c to consume any leftover newline character
        if (choice == 'y')
        {
            getchar(); // Clear the input buffer to avoid issues with fgets in the next iteration
            continue;  // Continue the loop for another record
        }
        else
        {
            break; // Exit the loop if the user does not want to enter another record
        }
    }
    printf("Thank you for using the program!\n");

    return 0;
}