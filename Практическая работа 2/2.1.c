#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void) {
	int num1;
	int num2;
	int num3;
	scanf("%d %x %o", &num1, &num2, &num3);

	printf("UNIT_ID: %d\n", num1);
	printf("UNIT_VERSION: %d\n", num2);
	printf("UNIT_STATUS: %d\n", num3);
	printf("SUM: %d\n", num1 + num2 + num3);

	return 0;
}