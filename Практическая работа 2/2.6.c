#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

int main(void) {
    int input;
    scanf("%d", &input);
    uint8_t value = (uint8_t)input;

    uint8_t add_res = value + 10;
    printf("ADD: %u\n", (unsigned int)add_res);

    uint8_t mul2_res = value * 2;
    printf("MUL2: %u\n", (unsigned int)mul2_res);

    uint8_t sqr_res = value * value;
    printf("SQR: %u\n", (unsigned int)sqr_res);

    return 0;
}