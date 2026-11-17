/* Вариант 19 */
#include <stdio.h>

int main(void)
{
    int n, c, r;
    double p;

    while (1) {
        printf("\n1. Pa -> atm\n");
        printf("2. atm -> bar\n");
        printf("3. bar -> psi\n");
        printf("4. mmHg -> Pa\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        r = scanf("%d", &n);
        if (r == EOF) {
            break;
        }
        if (r != 1) {
            printf("Invalid option.\n");
            c = getchar();
            while (c != '\n' && c != EOF) {
                c = getchar();
            }
            continue;
        }
        if (n == 0) {
            break;
        }
        if (n < 1 || n > 4) {
            printf("Invalid option.\n");
            continue;
        }
        printf("Enter pressure: ");
        r = scanf("%lf", &p);
        if (r == EOF) {
            break;
        }
        if (r != 1) {
            printf("Invalid pressure.\n");
            c = getchar();
            while (c != '\n' && c != EOF) {
                c = getchar();
            }
            continue;
        }
        if (p < 0) {
            printf("Pressure must be nonnegative.\n");
            continue;
        }
        switch (n) {
            case 1:
                printf("%.6f atm\n", p / 101325);
                break;
            case 2:
                printf("%.6f bar\n", p * 1.01325);
                break;
            case 3:
                printf("%.6f psi\n", p * 14.503773773);
                break;
            case 4:
                printf("%.6f Pa\n", p * 133.322387415);
                break;
        }
    }
    return 0;
}
