#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int dec_10 = 10;
    int oct_10 = 010;
    int hex_10 = 0x10;

    printf("DEC_10: %d\n", dec_10);
    printf("OCT_10: %d\n", oct_10);
    printf("HEX_10: %d\n", hex_10);

    printf("INT_SUFFIX: %d %d %d %d\n",
        (int)sizeof(10),
        (int)sizeof(10u),
        (int)sizeof(10LL),
        (int)sizeof(10ULL));

    printf("FLOAT_SUFFIX: %d %d %d\n",
        (int)sizeof(0.1f),
        (int)sizeof(0.1),
        (int)sizeof(0.1L));

    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);

    char ch = 'A';
    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');

    printf("CHAR_LIT_VAR_STR: %d %d %d\n",
        (int)sizeof('A'),
        (int)sizeof(ch),
        (int)sizeof("A"));

    return 0;
}