#include <stdio.h>

void main() {
    float a, b, sum;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    sum = a + b;

    printf("Sum of %.2f and %.2f = %.2f\n", a, b, sum);

}
