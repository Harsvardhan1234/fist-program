#include <stdio.h>

void main() 
{
    char name[50];
    int age;
    char city[50];

    // Input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your city: ");
    scanf("%s", city);

    // Output
    printf("\n--- Your Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("City: %s\n", city);

}
