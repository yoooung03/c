/*
#include<stdio.h>
void main()
{
	int num, n, count = 0;

	printf("���� �ϳ��� �Է��ϼ���: ");
	scanf_s("%d", &num);
	
	for (n = num; n > 0; n--)
	{
		if (num % n == 0)
			count++;
	}

	if (count == 2)
		printf("%d��(��) �Ҽ��Դϴ�\n", num);
	else
		printf("%d��(��) �Ҽ��� �ƴմϴ�\n", num);
}
*/
/*
#include<stdio.h>
void main() {
	int i, n, sum = 0;
	printf("���� n�� �Է��ϼ���: ");
	scanf_s("%d", & n);

	for (i = 1; i <= n; i++) {
		sum += i;
		if (sum > 100) {
			printf("��=%d, i=%d\n", sum, i);
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
	printf("������ ���߼���!\n");

	x = rand() % 100 + 1;
	y = rand() % 100 + 1;

	while (1) {
		printf("%d + %d = ", x, y);
		scanf_s("%d", &answer);

		if (answer == (x + y)) {
			printf("�����Դϴ�");
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
	printf("������ ���߼���!\n\n");

	x = rand() % 100 + 1;
	y = rand() % 100 + 1;

	for (;;){
		printf("%d+%d=", x, y);
		scanf_s("%d", &answer);
		count++;
		if(answer==(x+y)){
			printf("�����Դϴ�\n\n");
			break;
		}
	}
	printf("���� �Է� Ƚ��: %d��\n", count);
}
*/