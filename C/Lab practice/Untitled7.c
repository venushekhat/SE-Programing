#include <stdio.h>

int main() {
    int n, i;
    int max;

    // Ask the user how many numbers they want to compare
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if n is a valid number
    if (n <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

    // Ask the user for the first number to initialize max
    printf("Enter number 1: ");
    scanf("%d", &max);

    for (i = 2; i <= n; i++) {
        int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
