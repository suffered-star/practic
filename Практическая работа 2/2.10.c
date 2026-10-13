#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

int main(void) {
    int id;
    unsigned int status_raw;
    float voltage;

    scanf("%x %o %f", &id, &status_raw, &voltage);

    uint8_t status = (uint8_t)status_raw;
    uint16_t sum = (uint16_t)(id + status);

    printf("PACKET_ID: %d\n", id);
    printf("STATUS_CODE: %u\n", status);
    printf("STATUS_CHAR: %c\n", status);
    printf("VOLTAGE: %.2f\n", voltage);
    printf("CHECKSUM: %u\n", sum);

    return 0;
}