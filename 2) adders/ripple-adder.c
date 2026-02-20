#include <stdio.h>
#include "pastlogic.h"

// re-use full adder
void full_adder(unsigned int a, unsigned int b, unsigned int carry_in, unsigned int *sum, unsigned int *carry_out) {
    *sum = XOR((XOR(a, b)), carry_in);
    *carry_out = OR(AND(XOR(a, b), carry_in),AND(a,b));
}

// bit counter
unsigned int bit_count(unsigned int num) {
    if (num == 0) return 1;
    unsigned int count = 0;
    while (num > 0) {
        num = num >> 1;
        count++;
    }
    return count;
}

// find max bit count
unsigned int max_bit_count(unsigned int a, unsigned int b) {
    if (bit_count(a) > bit_count(b)) return bit_count(a);
    else return bit_count(b);   
}

unsigned int ripple_adder(unsigned int a, unsigned int b) {
    unsigned int carry = 0, A = 0, B = 0, result = 0;
    unsigned int s, c;
    for (int i = 0; i <= (max_bit_count(a, b)); i++) {
        // access the i'th bit of both numbers by right shifting
        // use built-in bitwise operators for multi-bit comparisons (same on line 23)
        A = (a >> i) & 1;
        B = (b >> i) & 1;
        // apply full adder to current bits
        full_adder(A, B, carry, &s, &c);
        // left shifting by i aligns sum w/ correct bit; using OR turns bit on if sum = 1
        result = result | (s << i);
        // carry reassigned for next loop
        carry = c;
    }
    return result; 
}

int main() {
    int num1, num2;
    printf("Type two numbers to be added (separated by a space): ");
    scanf("%d %d", &num1, &num2);
    printf("%d", ripple_adder(num1, num2));
}