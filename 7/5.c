/* Вариант 19 */
#include <stdio.h>

int rec(int n)
{
    int i, s;

    if (n == 0) {
        return 1;
    }
    s = rec(n - 1);
    for (i = 0; i < n; i++) {
        s = s + rec(i) * rec(n - 1 - i);
    }
    return s;
}

int loop(int n)
{
    int a[11], i, j;

    a[0] = 1;
    for (i = 1; i <= n; i++) {
        a[i] = a[i - 1];
        for (j = 0; j < i; j++) {
            a[i] = a[i] + a[j] * a[i - 1 - j];
        }
    }
    return a[n];
}

int main(void)
{
    int n;

    printf("Enter n from 0 to 10: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 10) {
        printf("Invalid input.\n");
        return 0;
    }
    printf("Schroeder number (recursive): %d\n", rec(n));
    printf("Schroeder number (loop): %d\n", loop(n));
    return 0;
}
