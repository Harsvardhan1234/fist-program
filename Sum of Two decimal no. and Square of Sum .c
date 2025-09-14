#include <stdio.h>

void main() {
    float a, b, sum, square;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    sum = a + b;          
    square = sum * sum;   

    printf("Sum = %.2f\n", sum);
    printf("Square of Sum = %.2f\n", square);

}
