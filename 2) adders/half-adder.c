#include <stdio.h>
#include "pastlogic.h"

void half_adder(unsigned int a, unsigned int b, unsigned int *sum, unsigned int *carry) {
    *sum = XOR(a,b);
    *carry = AND(a,b);
}

void half_adder_table() {
    printf("Half adder truth table:\n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            unsigned int s, c;
            half_adder(i, j, &s, &c);
            printf("A: %d\nB: %d\nSum: %d\nCarry: %d\n\n", i, j, s, c);
        }
    }
    printf("\n");
}

int main() {
    unsigned int s, c;
    half_adder_table();
    return 0;
}