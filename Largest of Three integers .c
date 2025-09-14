#include <stdio.h>

void main() {
    int a, b, c, largest;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // Using nested ternary operator
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Largest number is: %d\n", largest);


}
