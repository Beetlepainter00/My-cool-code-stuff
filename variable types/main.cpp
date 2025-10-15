#include <stdio.h>

int main() {
    char myChar;

    printf("Enter a character: ");
    scanf_s("%c", &myChar); 

    printf("You entered: %c\n", myChar);

    return 0;
}