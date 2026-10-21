#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

int main(void) {
    int16_t x, y;

    printf("Введите x и y: ");
    scanf("%hd %hd", &x, &y);

    if (y == 0) {
        printf("Ошибка: деление на ноль!\n");
        return 1;
    }

    float result = (float)x / y;

    printf("Результат: %f\n", result);
    printf("Размеры: sizeof(int16_t)=%llu, sizeof(float)=%llu\n",
        (unsigned long long)sizeof(int16_t),
        (unsigned long long)sizeof(float));

    return 0;
}