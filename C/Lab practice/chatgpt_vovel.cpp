#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("\n\n\tEnter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("\n\n\t%c is a vowel.\n", ch);
    } else {
        printf("\n\n\t%c is not a vowel.\n", ch);
    }

    return 0;
}

