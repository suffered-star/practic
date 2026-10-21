#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;
    printf("Введите количество чисел (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Некорректное количество чисел.\n");
        return 1;
    }

    int i = 0;
    int num;
    int max_val; 

    printf("Введите число 1: ");
    scanf("%d", &max_val);

    i++; 

    while (i < n) {
        printf("Введите число %d: ", i + 1);
        scanf("%d", &num);

        
        if (num > max_val) {
            max_val = num; 
        }

        i++;
    }

    printf("Максимальное значение: %d\n", max_val);
    return 0;
}