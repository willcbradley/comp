#include <stdio.h>

int AND(int param1, int param2) {
    return param1 * param2;
}

int OR(int param1, int param2) {
    return param1 + param2 - param1 * param2;
}

int NOT(int value) {
    return 1 - value;
}

int XOR(int param1, int param2) {
    return AND(OR(param1, param2), NOT(AND(param1, param2)));
}

void ANDTABLE() {
    printf("AND truth table:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("AND(%d, %d) = %d\n", i, j, AND(i, j));
        }
    }
    printf("\n");
}

void ORTABLE() {
    printf("OR truth table:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("OR(%d, %d) = %d\n", i, j, OR(i, j));
        }
    }
    printf("\n");
}

void NOTTABLE() {
    printf("NOT truth table:\n");
    for (int i = 0; i < 2; i++) {
        printf("NOT(%d) = %d\n", i, NOT(i));
    }
    printf("\n");
}

void XORTABLE() {
    printf("XOR truth table:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("XOR(%d, %d) = %d\n", i, j, XOR(i, j));
        }
    }
    printf("\n");
}

int main() {
    NOTTABLE();
    ANDTABLE();
    ORTABLE();
    XORTABLE();
    return 0;
}