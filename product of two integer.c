#include <stdio.h>

void main() 
{
    int a, b, product;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    product = a * b; 

    printf("product of %d and %d = %d\n", a, b, product);  
   
}
