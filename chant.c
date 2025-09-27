#include <stdio.h>
#include <ctype.h>

int main(void) {
    int repeat; // User defined integer for chant repetition
    int i = 1;

    // Assign user input to the repeat variable
    printf("chant: ");
    scanf("%d", &repeat);
    printf("\n");

    // Repeat the chant as specified by the user
    for (isdigit(repeat); i <= repeat; i++) {
        printf("one!\n");
        printf("two!\n");
        printf("three!\n");
        printf("four!\n");
        printf("(%d)\n\n", i);
    }

    // Print an error if the input is invalid
    if (i == 1) {
        printf("Error: Not a valid integer\n");
        return 1;
    }

    // Return 0 if chant executes successfully
    else {
        return 0;
    }
}