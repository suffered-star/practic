/* Вариант 0 */
#include <stdio.h>
#include "matrixfunc.h"

int main(void)
{
    int a[100], n = 0, m = 0, x, y, k, r, ready = 0;
    size_t row = 0, col = 0;
    char c;

    while (1) {
        printf("\na. Set matrix size\n");
        printf("b. Fill matrix\n");
        printf("c. Show values and addresses\n");
        printf("d. Position of the minimum\n");
        printf("e. Sum of elements above k\n");
        printf("f. Position of the last positive element\n");
        printf("g. Exit\nChoose: ");
        if (scanf(" %c", &c) != 1 || c == 'g') {
            break;
        }
        if (c == 'a') {
            printf("Rows (1-10): ");
            r = read_int(&x);
            if (r == -1) {
                break;
            }
            if (r == 0) {
                continue;
            }
            printf("Columns (1-10): ");
            r = read_int(&y);
            if (r == -1) {
                break;
            }
            if (r == 0) {
                continue;
            }
            if (x < 1 || x > 10 || y < 1 || y > 10) {
                printf("Both sizes must be from 1 to 10.\n");
                continue;
            }
            n = x;
            m = y;
            ready = 0;
        } else if (c == 'b') {
            if (n == 0) {
                printf("Set the size first.\n");
                continue;
            }
            ready = 0;
            r = fill(a, n, m);
            if (r == -1) {
                break;
            }
            if (r == 1) {
                ready = 1;
            }
        } else if (c >= 'c' && c <= 'f') {
            if (ready == 0) {
                printf("Fill the matrix first.\n");
                continue;
            }
            if (c == 'c') {
                show(a, n, m);
            } else if (c == 'd') {
                r = min_pos(a, n, m, &row, &col);
                if (r == 0) {
                    printf("Minimum position: (%zu, %zu)\n", row, col);
                } else {
                    printf("Matrix is empty.\n");
                }
            } else if (c == 'e') {
                printf("Enter k: ");
                r = read_int(&k);
                if (r == -1) {
                    break;
                }
                if (r == 0) {
                    continue;
                }
                printf("Sum: %.0f\n", sum(a, n, m, k));
            } else {
                r = last_pos(a, n, m, &row, &col);
                if (r == 0) {
                    printf("Last positive position: (%zu, %zu)\n", row, col);
                } else {
                    printf("No positive elements.\n");
                }
            }
        } else {
            printf("Invalid menu item.\n");
        }
    }
    return 0;
}
