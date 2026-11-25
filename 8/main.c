/* Вариант 0 */
#include <stdio.h>
#include "myarrfunc.h"

int main(void)
{
    int a[100], n = 0, k, r, ready = 0;
    char c;

    while (1) {
        printf("\na. Set array size\n");
        printf("b. Fill array\n");
        printf("c. Show values and addresses\n");
        printf("d. Indices of elements above k\n");
        printf("e. Indices between min and max\n");
        printf("f. Sum of elements above k\n");
        printf("g. Exit\nChoose: ");
        if (scanf(" %c", &c) != 1 || c == 'g') {
            break;
        }
        if (c == 'a') {
            printf("Size (1-100): ");
            r = read_int(&k);
            if (r == -1) {
                break;
            }
            if (r == 1 && k >= 1 && k <= 100) {
                n = k;
                ready = 0;
            } else if (r == 1) {
                printf("Size must be from 1 to 100.\n");
            }
        } else if (c == 'b') {
            if (n == 0) {
                printf("Set the size first.\n");
                continue;
            }
            ready = 0;
            r = fill(a, n);
            if (r == -1) {
                break;
            }
            if (r == 1) {
                ready = 1;
            }
        } else if (c >= 'c' && c <= 'f') {
            if (ready == 0) {
                printf("Fill the array first.\n");
                continue;
            }
            if (c == 'c') {
                show(a, n);
            } else if (c == 'e') {
                r = between(a, n);
                if (r == -1) {
                    printf("No matching elements.\n");
                }
            } else {
                printf("Enter k: ");
                r = read_int(&k);
                if (r == -1) {
                    break;
                }
                if (r == 0) {
                    continue;
                }
                if (c == 'd') {
                    r = above(a, n, k);
                    if (r == -1) {
                        printf("No matching elements.\n");
                    }
                } else {
                    printf("Sum: %.0f\n", sum(a, n, k));
                }
            }
        } else {
            printf("Invalid menu item.\n");
        }
    }
    return 0;
}
