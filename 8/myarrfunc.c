/* Вариант 0 */
#include <stdio.h>
#include "myarrfunc.h"

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

int fill(int *a, size_t n)
{
    size_t i;
    int r;

    printf("Enter %zu integers:\n", n);
    for (i = 0; i < n; i++) {
        r = read_int(a + i);
        if (r != 1) {
            return r;
        }
    }
    return 1;
}

void show(int *a, size_t n)
{
    size_t i;

    for (i = 0; i < n; i++) {
        printf("%zu: %d, address: %p\n", i, *(a + i), (void *)(a + i));
    }
}

int above(int *a, size_t n, int k)
{
    size_t i;
    int count = 0;

    printf("Indices of elements > %d:\n", k);
    for (i = 0; i < n; i++) {
        if (*(a + i) > k) {
            printf("%zu ", i);
            count = count + 1;
        }
    }
    printf("\n");
    if (count == 0) {
        return -1;
    }
    return count;
}

int between(int *a, size_t n)
{
    size_t i, min = 0, max = 0, t;
    int count = 0;

    if (n == 0) {
        return -1;
    }
    for (i = 1; i < n; i++) {
        if (*(a + i) < *(a + min)) {
            min = i;
        }
        if (*(a + i) > *(a + max)) {
            max = i;
        }
    }
    printf("Min index: %zu, max index: %zu\n", min, max);
    if (min > max) {
        t = min;
        min = max;
        max = t;
    }
    printf("Indices between min and max (excluding endpoints):\n");
    for (i = min + 1; i < max; i++) {
        printf("%zu ", i);
        count = count + 1;
    }
    printf("\n");
    if (count == 0) {
        return -1;
    }
    return count;
}

double sum(int *a, size_t n, int k)
{
    size_t i;
    double s = 0;

    for (i = 0; i < n; i++) {
        if (*(a + i) > k) {
            s = s + *(a + i);
        }
    }
    return s;
}
