/* ������ ����
#include<stdio.h>
int main() {
	int a = 0;
	int result = 0;

	printf("�� �ڸ� 10�� ������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	result = (a / 100) + (a % 100 / 10) + (a % 100 % 10 / 1);
	printf("�Է� ���� ���ڸ����� �� �ڸ��� �� : %d\n", result);

	return 0;

}
#include<stdio.h>
int main() {
	int ctemp = 0;
	double ftemp = 0;

	printf("���� �µ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &ctemp);

	ftemp = (9.0 / 5.0) * ctemp + 32;
	printf("ȭ�� �µ��� %.2f�Դϴ�.", ftemp);

	return 0;

}
*/
/* ���ǽ� ����
#include<stdio.h>
int main() {
	int score1;
	int score2;

	printf("���������� �Է��Ͻÿ� : ");
	scanf_s("%d", &score1);

	printf("���������� �Է��Ͻÿ� : ");
	scanf_s("%d", &score2);

	if (score1 >= 90 && score2 >= 90)
		printf("����� �հ��Դϴ�.\n");
	else if (score1 >= 90 || score2 >= 90)
		printf("����� ����Դϴ�.\n");
	else
		printf("����� ���հ��Դϴ�.\n");

	return 0;

}

#include<stdio.h>
int main() {
	int x;
	int y;

	printf("x�� ��ǥ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	printf("y�� ��ǥ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &y);

	if (x > 0 && y > 0)
		printf("1��и�");
	else if (x < 0 && y>0)
		printf("2��и�");
	else if (x < 0 && y < 0)
		printf("3��и�");
	else if (x > 0 && y < 0)
		printf("4��и�");
	else if (x == 0 && y == 0)
		printf("����");
	else if (x == 0)
		printf("y�� ���� ���̴�");
	else
		printf("x�� ���� ���̴�");

	return 0;
}
*/