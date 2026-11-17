/* Вариант 15 */
#include <stdio.h>

int main(void)
{
    double s, a = 0, b = 0, c = 0;

    printf("Enter transaction amount: ");
    if (scanf("%lf", &s) != 1 || s < 0) {
        printf("Invalid amount.\n");
        return 0;
    }
    if (s <= 10000) {
        a = s;
    } else if (s <= 30000) {
        a = 10000;
        b = s - 10000;
    } else {
        a = 10000;
        b = 20000;
        c = s - 30000;
    }
    printf("Transaction amount: %.2f\n", s);
    printf("Up to 10000: %.2f * 4%% = %.2f\n", a, a * 0.04);
    printf("From 10000 to 30000: %.2f * 6%% = %.2f\n", b, b * 0.06);
    printf("Above 30000: %.2f * 8%% = %.2f\n", c, c * 0.08);
    printf("Total commission: %.2f\n", a * 0.04 + b * 0.06 + c * 0.08);

    return 0;
}
