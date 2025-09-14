    #include <stdio.h>

    void main() {
        float a, b, c, largest;

        printf("Enter first number: ");
        scanf("%f", &a);

        printf("Enter second number: ");
        scanf("%f", &b);

        printf("Enter third number: ");
        scanf("%f", &c);


        largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

        printf("Largest number is: %.2f\n", largest);


    }
