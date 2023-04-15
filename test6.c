#include<stdio.h>
int main() {
	int num;
	char flag;

	do {
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &num);
		getchar();
		switch (num % 2) {
		case 0: {printf("짝수\n"); break; }
		case 1: {printf("홀수\n"); break; }

		}
		printf("다시할까요?(Y/N): ");
		scanf_s("%c", &flag, 1);
	} while (flag == 'Y' || flag == 'y');
	printf("***즐거운 하루 되세요***\n");
}