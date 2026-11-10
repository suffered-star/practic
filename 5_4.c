// Вариант 29
#include <stdio.h>

int main(void)
{
    enum { SIZE = 8 };
    double arr[SIZE] = {0.0, 1.0};

    for (int i = 2; i < SIZE; ++i) {
        arr[i] = arr[i - 1] + 2.0 * arr[i - 2];
    }

    double sum = 0.0;
    for (int i = 0; i < SIZE; ++i) {
        printf("%s%.2f", i == 0 ? "" : " ", arr[i]);
        sum += arr[i];
    }
    printf("\n%.2f\n", sum);

    return 0;
}
