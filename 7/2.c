/* Вариант 3 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c, a = 0, b = 0, d = 0, e = 0, n = 0;

    c = getchar();
    while (c != EOF) {
        n = n + 1;
        if (isalpha(c)) {
            a = a + 1;
        } else if (isdigit(c)) {
            b = b + 1;
        } else if (isspace(c)) {
            d = d + 1;
        } else if (ispunct(c)) {
            e = e + 1;
        }
        c = getchar();
    }
    printf("Letters: %d\n", a);
    printf("Digits: %d\n", b);
    printf("Whitespace: %d\n", d);
    printf("Punctuation: %d\n", e);
    printf("Total: %d\n", n);
    return 0;
}
