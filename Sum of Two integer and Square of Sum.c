#include <stdio.h>

void main() {
    int a, b, sum, square;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;          
    square = sum * sum;   

    printf("Sum = %d\n", sum);
    printf("Square of Sum = %d\n", square);

}
