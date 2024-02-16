#include <stdio.h>

int main() {
    int num1, num2, sum, diff;

    // Input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Addition
    sum = num1 + num2;
    printf("Sum: %d + %d = %d\n", num1, num2, sum);

    // Subtraction
    diff = num1 - num2;
    printf("Difference: %d - %d = %d\n", num1, num2, diff);

    return 0;
}


