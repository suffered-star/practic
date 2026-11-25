/* Вариант 15 */
#include <stdio.h>

void f(double *a, double *b)
{
    *a = *a * *b;
}

int main(void)
{
    double a, b;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 0;
    }
    printf("Before: a = %.2f, b = %.2f\n", a, b);
    f(&a, &b);
    printf("After: a = %.2f, b = %.2f\n", a, b);
    return 0;
}
