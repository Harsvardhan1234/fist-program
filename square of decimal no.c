#include <stdio.h>

void main() {
    float a, square;

    printf("Enter a number: ");
    scanf("%f", &a);

    square = a * a;

    printf("Square of %f = %.2f\n", a, square);

}
