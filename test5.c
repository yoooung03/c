/*
#include<stdio.h>
void main()
{
	int num, n, count = 0;

	printf("정수 하나를 입력하세요: ");
	scanf_s("%d", &num);
	
	for (n = num; n > 0; n--)
	{
		if (num % n == 0)
			count++;
	}

	if (count == 2)
		printf("%d는(은) 소수입니다\n", num);
	else
		printf("%d는(은) 소수가 아닙니다\n", num);
}
*/
/*
#include<stdio.h>
void main() {
	int i, n, sum = 0;
	printf("정수 n을 입력하세요: ");
	scanf_s("%d", & n);

	for (i = 1; i <= n; i++) {
		sum += i;
		if (sum > 100) {
			printf("합=%d, i=%d\n", sum, i);
				break;
		}
	}
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
	srand(time(NULL));

	int x, y, answer;
	printf("정답을 맞추세요!\n");

	x = rand() % 100 + 1;
	y = rand() % 100 + 1;

	while (1) {
		printf("%d + %d = ", x, y);
		scanf_s("%d", &answer);

		if (answer == (x + y)) {
			printf("정답입니다");
			break;
		}
	}
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
	srand(time(NULL));

	int x, y, answer;
	int count = 0;
	printf("정답을 맞추세요!\n\n");

	x = rand() % 100 + 1;
	y = rand() % 100 + 1;

	for (;;){
		printf("%d+%d=", x, y);
		scanf_s("%d", &answer);
		count++;
		if(answer==(x+y)){
			printf("정답입니다\n\n");
			break;
		}
	}
	printf("정답 입력 횟수: %d번\n", count);
}
*/