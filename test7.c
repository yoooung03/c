#include<stdio.h>
void main() {
	int i, n, num, count = 0;
	printf("정수 하나를 입력하세요: ");
	scanf_s("%d", &num);

	for (i = num; i >=2; i--) {
		count = 0;
		for (n = i; n >= 1; n--) {
			if (i % n == 0)
				count++;
		}if (count == 2) { printf("%d\n", i); }
	}
}