#include<stdio.h>
int main() {
	int num;
	char flag;

	do {
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &num);
		getchar();
		switch (num % 2) {
		case 0: {printf("¦��\n"); break; }
		case 1: {printf("Ȧ��\n"); break; }

		}
		printf("�ٽ��ұ��?(Y/N): ");
		scanf_s("%c", &flag, 1);
	} while (flag == 'Y' || flag == 'y');
	printf("***��ſ� �Ϸ� �Ǽ���***\n");
}