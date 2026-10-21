#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double min_to_hr(double min) {
    const double MIN_PER_HOUR = 60.0;
    return min / MIN_PER_HOUR;
}

int main(void) {
    double value;

    printf("Введите минуты для перевода в часы (0 или неверный ввод для выхода):\n");

    while (scanf("%lf", &value) == 1) {
        double result = min_to_hr(value);
        printf("Результат: %.2lf\n", result);
        printf("Введите следующее значение:\n");
    }

    printf("Программа завершена.\n");
    return 0;
}