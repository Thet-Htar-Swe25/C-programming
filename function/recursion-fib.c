#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) 
{
    // Base cases: returns 0 for 0, and 1 for 1
    if (n <= 1) 
    {
        return n;
    }
    // Recursive step: sum of the two preceding numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    int terms = 10; // Number of terms to display

    printf("Fibonacci Series up to %d terms:\n", terms);
    for (int i = 0; i < terms; i++) 
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}