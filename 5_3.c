// Вариант 23
#include <stdio.h>

int main(void)
{
    int n;

    while (1) {
        printf("N: ");
        if (scanf("%d", &n) != 1 || n <= 0) {
            break;
        }

        double sum = 0.0;
        double sign = -1.0;
        for (int i = 0; i < n; ++i) {
            double index = i + 1.0;
            sum += sign / (2.0 * index + 1.0);
            sign = -sign;
        }
        printf("SUM: %.6f\n", sum);
    }

    return 0;
}
