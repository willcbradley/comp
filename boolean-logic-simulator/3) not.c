#include <stdio.h>

// return type int, fn name not, param type int, param name value
// no other functions can be defined within main
int NOT(int value) {
    return 1 - value;
}

int main() {
    const int TRUE = 1;
    const int FALSE = 0;

    printf("Logical State Representation:\n");
    printf("FALSE is represented by: %d\n", FALSE);
    printf("TRUE is represented by: %d\n", TRUE);
    
    printf("\nNOT Function Results:\n");
    printf("NOT(%d) = %d\n", FALSE, NOT(FALSE));
    printf("NOT(%d) = %d\n", TRUE, NOT(TRUE));

    return 0;
}