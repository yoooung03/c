#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main() {
	srand(time(NULL));

	int x, y, i, answer;
	int count = 0;
	printf("������ ���߼���!\n\n");



	for (i = 1; i <= 3; i++) {
		x = rand() % 100 + 1;
		y = rand() % 100 + 1;
		for (i = 1; i <= 3; i++) {

			printf("%d+%d=", x, y);
			scanf_s("%d", &answer);
			if (answer == (x + y)) {
				printf("�����Դϴ�\n\n");
				count++;
				x = rand() % 100 + 1;
				y = rand() % 100 + 1;
			
			}

		}
		if (count == 3) {
			break;
		}

	}
	printf("���� �Է� Ƚ��: %d��\n", count);
}