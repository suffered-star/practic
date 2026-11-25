/* Вариант 9 */
#include <stdio.h>
#include <math.h>

double f(double a, double b)
{
    return sqrt(a * a + b * b);
}

int main(void)
{
    double a, b;

    printf("Enter pairs of numbers (text to finish):\n");
    while (scanf("%lf %lf", &a, &b) == 2) {
        printf("Result: %.4f\n", f(a, b));
    }
    return 0;
}
