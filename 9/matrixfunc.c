/* Вариант 0 */
#include <stdio.h>
#include "matrixfunc.h"

int read_int(int *x)
{
    int r, c;

    r = scanf("%d", x);
    if (r == EOF) {
        return -1;
    }
    if (r != 1) {
        printf("Invalid input.\n");
        c = getchar();
        while (c != '\n' && c != EOF) {
            c = getchar();
        }
        return 0;
    }
    return 1;
}

int fill(int *a, size_t n, size_t m)
{
    size_t i, j;
    int r;

    printf("Enter matrix values row by row:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            r = read_int(a + i * m + j);
            if (r != 1) {
                return r;
            }
        }
    }
    return 1;
}

void show(int *a, size_t n, size_t m)
{
    size_t i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("(%zu, %zu): %d, address: %p\n",
                   i, j, *(a + i * m + j), (void *)(a + i * m + j));
        }
        printf("\n");
    }
}

int min_pos(int *a, size_t n, size_t m, size_t *row, size_t *col)
{
    size_t i, j;
    int min;

    if (n == 0 || m == 0) {
        return -1;
    }
    min = *a;
    *row = 0;
    *col = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (*(a + i * m + j) < min) {
                min = *(a + i * m + j);
                *row = i;
                *col = j;
            }
        }
    }
    return 0;
}

double sum(int *a, size_t n, size_t m, int k)
{
    size_t i, j;
    double s = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (*(a + i * m + j) > k) {
                s = s + *(a + i * m + j);
            }
        }
    }
    return s;
}

int last_pos(int *a, size_t n, size_t m, size_t *row, size_t *col)
{
    size_t i, j;
    int found = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (*(a + i * m + j) > 0) {
                *row = i;
                *col = j;
                found = 1;
            }
        }
    }
    if (found == 0) {
        return -1;
    }
    return 0;
}
