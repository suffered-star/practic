// Вариант 11
#include <math.h>
#include <stdio.h>

int main(void)
{
    const double a = 0.0;
    const double b = 5.0;
    const double h = 1.0;
    int iteration = 1;

    printf("%3s %10s %10s\n", "N", "X", "Y");
    for (double x = a; x <= b; x += h) {
        printf("%3d %10.4f %10.4f\n", iteration, x, pow(2.0, x));
        ++iteration;
    }

    return 0;
}
