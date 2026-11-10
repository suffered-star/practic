// Вариант 17
#include <math.h>
#include <stdio.h>

int main(void)
{
    enum { HEIGHT = 5, PERIODS = 5, COLUMNS_PER_PERIOD = 12 };
    const double middle = (HEIGHT - 1) / 2.0;
    const double phase_step = 2.0 * acos(-1.0) / COLUMNS_PER_PERIOD;

    for (int row = 0; row < HEIGHT; ++row) {
        for (int column = 0; column < PERIODS * COLUMNS_PER_PERIOD; ++column) {
            double phase = (column % COLUMNS_PER_PERIOD) * phase_step;
            int wave_row = (int)lround(middle - middle * sin(phase));

            putchar(row == wave_row ? '*' : ' ');
        }
        putchar('\n');
    }

    return 0;
}
