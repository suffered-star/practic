#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    long double number, number_plus;
    double big, big_plus;
    float small, small_plus;

    printf("Введите число: ");
    scanf("%Lf", &number);

    big = number;
    small = number;

    number_plus = number + 1;
    big_plus = big + 1;
    small_plus = small + 1;

    printf("FLOAT: %.6f\n", small);
    printf("DOUBLE: %.6f\n", big);
    printf("LDOUBLE: %.6Lf\n", number);

    printf("FLOAT+1: %.6f\n", small_plus);
    printf("DOUBLE+1: %.6f\n", big_plus);
    printf("LDOUBLE+1: %.6Lf\n", number_plus);

    return 0;
}
