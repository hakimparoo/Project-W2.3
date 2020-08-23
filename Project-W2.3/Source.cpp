#include<stdio.h>
int main() {
	{ int a;
	printf_s("Enter your like number : ");
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < (a - i - 1); j++) {
			printf_s(" ");
		}
		for (int k = 0; k < ((2 * i) + 1); k++) {
			printf_s("*");
		}
		printf_s("\n");
	}
	printf_s("\n");
	}
	return 0;
}