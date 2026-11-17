/* Вариант 9 */
#include <stdio.h>

int main(void)
{
    int n, a, b, k1 = 0, k2 = 0;
    double sum1 = 0, sum2 = 0;

    printf("Enter integers (0 to finish):\n");
    while (1) {
        if (scanf("%d", &n) != 1 || n == 0) {
            break;
        }
        a = n;
        b = n % 10;
        while (a <= -10 || a >= 10) {
            a = a / 10;
        }
        if (a < 0) {
            a = -a;
        }
        if (b < 0) {
            b = -b;
        }

        if (a > b) {
            k1 = k1 + 1;
            sum1 = sum1 + n;
        } else if (a < b) {
            k2 = k2 + 1;
            sum2 = sum2 + n;
        }
    }
    printf("First digit > last digit: %d\n", k1);
    if (k1 > 0) {
        printf("Mean: %.2f\n", sum1 / k1);
    } else {
        printf("No numbers in this group.\n");
    }
    printf("First digit < last digit: %d\n", k2);
    if (k2 > 0) {
        printf("Mean: %.2f\n", sum2 / k2);
    } else {
        printf("No numbers in this group.\n");
    }

    return 0;
}
