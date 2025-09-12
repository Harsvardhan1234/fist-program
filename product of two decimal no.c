#include <stdio.h>

void main() {
    float a, b, mul;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    mul = a * b;

    printf("multiplcation of %.2f and %.2f = %.2f\n", a, b, mul);

}
