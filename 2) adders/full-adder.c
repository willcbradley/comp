#include <stdio.h>
#include "pastlogic.h"

void full_adder(unsigned int a, unsigned int b, unsigned int carry_in, unsigned int *sum, unsigned int *carry_out) {
    *sum = XOR((XOR(a, b)), carry_in);
    *carry_out = OR(AND(XOR(a, b), carry_in),AND(a,b));
}

void full_adder_table() {
    printf("Full adder truth table:\n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                unsigned int s, c;
                full_adder(i, j, k, &s, &c);
                printf("A: %d\nB: %d\nCarry In: %d\nSum: %d\nCarry Out: %d\n\n", i, j, k, s, c);
            }
        }
    }
    printf("\n");
}

int main() {
    full_adder_table();
    return 0;
}