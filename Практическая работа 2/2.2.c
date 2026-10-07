#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int num1;
	int num2;
	scanf("%d %d", &num1, &num2 );

	bool status1 = num1;
	bool status2 = num2;

	printf("MODULE_READY: %d\n", status1);
	printf("FAULT_STATE: %d\n", status2);
	printf("BOOL_SIZE: %d\n", (int)sizeof(bool));
	printf("FLAGS_SUM: %d\n", status1 + status2);

	return 0;
}