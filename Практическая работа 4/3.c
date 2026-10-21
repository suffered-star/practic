#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;
    printf("Введите количество элементов (N): ");
    scanf("%d", &n);

    int i = 1;        
    int count = 0;    

    while (count < n) {
        
        int a = i * (i + 1) / 2;

        printf("%d ", a);

        i++;          
        count++;      
    }

    printf("\n");
    return 0;
}