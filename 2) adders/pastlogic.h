#ifndef PASTLOGIC_H
#define PASTLOGIC_H

// Previously built functions

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

#endif