#include <stdio.h>

// re-defining functions (not using header functions) for consolidation purposes

int AND(int param1, int param2) {
    return param1 * param2;
}

int OR(int param1, int param2) {
    return param1 + param2 - param1 * param2;
}

int NOT(int value) {
    return 1 - value;
}

// defining XOR function
// technically, (param1 + param2) % 2 is cleaner, but it's cooler to use the functions we've just made

int XOR(int param1, int param2) {
    return AND(OR(param1, param2), NOT(AND(param1, param2)));
}

int main() {
    printf("XOR(0,0) = %d\n", XOR(0,0));
    printf("XOR(0,1) = %d\n", XOR(0,1));
    printf("XOR(1,0) = %d\n", XOR(1,0));
    printf("XOR(1,1) = %d\n", XOR(1,1));
    return 0;
}