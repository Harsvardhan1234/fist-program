#include <stdio.h>

void main() {
    float a, b, div;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    div = a / b;

    printf("division of %.2f and %.2f = %.2f\n", a, b, div);

}
