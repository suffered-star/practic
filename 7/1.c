/* Вариант 11 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c;

    c = getchar();
    while (c != EOF) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
        putchar(c);
        c = getchar();
    }
    return 0;
}
