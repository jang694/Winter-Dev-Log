#include <stdio.h>

void main() {
	int a[5] = { 0, };
	printf("숫자를 5개 적으시오>>");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		printf("%d ", a[i]);
	}
	printf("\n");
	int max = a[0];
	int min = a[0]; 
	for (int i = 0; i < 5; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		else if (a[i] < min) {
			min = a[i];
		}
		
		
	}
	printf("최대값:%d\n", max);
	printf("최소:값%d\n", min);
}