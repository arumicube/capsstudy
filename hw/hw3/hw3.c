#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Factorial(int a) {
	
	if (a == 0 || a == 0) return 1;
	else return a * Factorial(a - 1);
}
int main() {
	int b;
	printf("���丮�� �ϰ� ���� ���ڸ� ��Ÿ���ÿ�: ");
	scanf("%d", &b);
	printf("%d ! = %d", b, Factorial(b));
}