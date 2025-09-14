#include <stdio.h>

void main() {
    int a, b, diff, square;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    diff = a - b;        
    square = diff * diff;  

    printf("Difference = %d\n", diff);
    printf("Square of Difference = %d\n", square);

}
