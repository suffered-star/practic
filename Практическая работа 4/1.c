#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

const int c = 60;

int main(void) {
    int input;

    while (1) {
        printf("Введите время в минутах (<=0 для выхода): ");
        if (scanf("%d", &input) != 1) break;

        if (input <= 0) break;

        int hours = input / c;
        int mins = input % c;

        printf("Часы: %d, Минуты: %d\n", hours, mins);
    }

    return 0;
}