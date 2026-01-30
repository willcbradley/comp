#include <stdio.h>

int AND(int param1, int param2) {
    return param1 * param2;
}

int OR(int param1, int param2) {
    return param1 + param2 - param1 * param2;
}

int main() {

    printf("AND(0,0) = %d\n", AND(0,0));
    printf("AND(0,1) = %d\n", AND(0,1));
    printf("AND(1,0) = %d\n", AND(1,0));
    printf("AND(1,1) = %d\n\n", AND(1,1));

    printf("OR(0,0) = %d\n", OR(0,0));
    printf("OR(0,1) = %d\n", OR(0,1));
    printf("OR(1,0) = %d\n", OR(1,0));
    printf("OR(1,1) = %d\n", OR(1,1));
    return 0;
}