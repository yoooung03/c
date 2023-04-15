/* 연산자 과제
#include<stdio.h>
int main() {
	int a = 0;
	int result = 0;

	printf("세 자리 10진 정수를 입력하세요 : ");
	scanf_s("%d", &a);

	result = (a / 100) + (a % 100 / 10) + (a % 100 % 10 / 1);
	printf("입력 받은 세자리수의 각 자리수 합 : %d\n", result);

	return 0;

}
#include<stdio.h>
int main() {
	int ctemp = 0;
	double ftemp = 0;

	printf("섭씨 온도를 입력하시오: ");
	scanf_s("%d", &ctemp);

	ftemp = (9.0 / 5.0) * ctemp + 32;
	printf("화씨 온도는 %.2f입니다.", ftemp);

	return 0;

}
*/
/* 조건식 과제
#include<stdio.h>
int main() {
	int score1;
	int score2;

	printf("전공점수를 입력하시오 : ");
	scanf_s("%d", &score1);

	printf("영어점수를 입력하시오 : ");
	scanf_s("%d", &score2);

	if (score1 >= 90 && score2 >= 90)
		printf("당신은 합격입니다.\n");
	else if (score1 >= 90 || score2 >= 90)
		printf("당신은 대기입니다.\n");
	else
		printf("당신은 불합격입니다.\n");

	return 0;

}

#include<stdio.h>
int main() {
	int x;
	int y;

	printf("x축 좌표를 입력하시오 : ");
	scanf_s("%d", &x);
	printf("y축 좌표를 입력하시오 : ");
	scanf_s("%d", &y);

	if (x > 0 && y > 0)
		printf("1사분면");
	else if (x < 0 && y>0)
		printf("2사분면");
	else if (x < 0 && y < 0)
		printf("3사분면");
	else if (x > 0 && y < 0)
		printf("4사분면");
	else if (x == 0 && y == 0)
		printf("원점");
	else if (x == 0)
		printf("y축 위의 점이다");
	else
		printf("x축 위의 점이다");

	return 0;
}
*/