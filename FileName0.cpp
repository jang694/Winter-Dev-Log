#include <stdio.h>


void main() {
	int h;
	printf("h(높이)값을 정하시오>>");
	scanf("%d", &h);

	for (int i = 0; i < h; i++) {
		for (int k = 0; k < h - i - 1; k++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < h; i++) {
		for (int k = 0; k < i; k++) {
			printf(" ");
		}
		for (int j = 0; j < (2 * h - 2 * i - 1); j++) {
			printf("*");
		}
		printf("\n");
	}
}