/* Вариант 11 */
#include <stdio.h>

int main(void)
{
    int c, max = -1;

    printf("Enter characters (# to finish):\n");
    c = getchar();
    while (c != '#' && c != EOF) {
        if (c > max) {
            max = c;
        }
        c = getchar();
    }
    if (max == -1) {
        printf("No characters entered.\n");
    } else {
        printf("Maximum ASCII code: %d\n", max);
    }

    return 0;
}
