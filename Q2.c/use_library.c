// use_library.c
#include <stdio.h>
#include "arith.h"   // Include the header of the static library

int main() {
    int x = 15, y = 5;

    printf("Using Static Library Functions:\n");
    printf("Add: %d\n", add(x, y));
    printf("Sub: %d\n", sub(x, y));
    printf("Mul: %d\n", mul(x, y));
    printf("Div: %d\n", divide(x, y));

    return 0;
}
