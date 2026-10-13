#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);

    // приведение к unsigned int необходимо, чтобы избежать 
    // переполнения знакового int

    printf("RANGE_OK: %d\n", (unsigned int)INT_MAX * 2u + 1u == UINT_MAX);

    return 0;
}