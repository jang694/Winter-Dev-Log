#include <stdio.h>

int add(int a,int b){
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int div(int a, int b) {
	return a / b;
}

void main() {
	int a, b = 0;
	char c = 0;
	printf("두 정수를 입력하시오_+,-,*,/_입력하시오");
	scanf("%d %d %c", &a, &b, &c);
	if (c ==  '+') {
		printf("결과: %d\n", add(a, b));
	}
	else if (c == '-') {
		printf("결과: %d\n", sub(a, b));
	}
	else if (c == '*') {
		printf("결과: %d\n", mul(a, b));
	}
	else if (c == '/') {
		printf("결과: %d\n", div(a, b));
	}
}