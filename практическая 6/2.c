/* Вариант 3 */
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>

int main(void)
{
    wint_t c;
    int a = 0, b = 0, d = 0;
    setlocale(LC_ALL, "");

    wprintf(L"Enter characters (# to finish):\n");
    c = getwchar();
    while (c != L'#' && c != WEOF) {
        if (iswdigit(c)) {
            a = a + 1;
        } else if (iswalpha(c)) {
            b = b + 1;
        } else {
            d = d + 1;
        }
        c = getwchar();
    }
    wprintf(L"Digits: %d\n", a);
    wprintf(L"Letters: %d\n", b);
    wprintf(L"Other characters: %d\n", d);

    return 0;
}
