#include <stdio.h>

int main(void) {
    int repeat;
    int i = 1;

    // Assign user input to the repeat variable
    printf("chant: ");
    scanf("%d", &repeat);
    printf("\n");

    // Check if the user's input is valid
    if (repeat < 1) {
        printf("Error: Not a valid integer\n");
        return 1;
    }

    // Repeat the chant as specified by the user
    while (i <= repeat) {
        printf("one!\n");
        printf("two!\n");
        printf("three!\n");
        printf("four!\n");
        printf("(%d)\n\n", i);
        i++;
    }

    return 0;
}