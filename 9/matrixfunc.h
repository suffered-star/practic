/* Вариант 0 */
#ifndef MATRIXFUNC_H
#define MATRIXFUNC_H

#include <stddef.h>

int read_int(int *x);
int fill(int *a, size_t n, size_t m);
void show(int *a, size_t n, size_t m);
int min_pos(int *a, size_t n, size_t m, size_t *row, size_t *col);
double sum(int *a, size_t n, size_t m, int k);
int last_pos(int *a, size_t n, size_t m, size_t *row, size_t *col);

#endif
