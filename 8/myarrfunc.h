/* Вариант 0 */
#ifndef MYARRFUNC_H
#define MYARRFUNC_H

#include <stddef.h>

int read_int(int *x);
int fill(int *a, size_t n);
void show(int *a, size_t n);
int above(int *a, size_t n, int k);
int between(int *a, size_t n);
double sum(int *a, size_t n, int k);

#endif
