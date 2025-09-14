#include <stdio.h>

void main() {
    int n, i, num, largest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &largest);   

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        largest = (num > largest) ? num : largest;
    }

    printf("The largest number is: %d\n", largest);

}
