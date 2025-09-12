#include <stdio.h>

void main() {
    float a, b, difference;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    difference = a - b;

    printf("Subtraction of %.2f and %.2f = %.2f\n", a, b, difference);

}
