#include <stdio.h>

int main() {
    int side_length; // Change this variable to adjust the size of the square
    printf("Enter the side length of the square: ");
    scanf("%d", &side_length);

    for (int i = 0; i < side_length; i++) {
        for (int j = 0; j < side_length; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

