#include <stdio.h>

int main() // standard main function
{
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;   // corrected

    printf("Sum of %d and %d = %d\n", a, b, sum);  // corrected

    return 0;   // indicate successful execution
}
