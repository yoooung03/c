/*#include<stdio.h>
int main() {
	int i = 1,n, sum = 0;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &i);

	while (i <= n) {
		sum += i;
		i++;
	}
	return 0;
}*/

/*
#include<stdio.h>
int main() {
	int i, n, sum;
	i = 1;
	sum = 0;

	while (i<=5) {
		printf("���� �Է��Ͻÿ� : ");
		scanf_s("%d", &i);
		sum += n;
		i++;
	}

	return 0;
}
*/

/*
#include<stdio.h>
int main() {
	int n;
	int i= 1;
	printf("���� �Է��ϼ��� : ");
	scanf_s(" % d", &n);

	while (i <= 9) {
		printf(" %d *%d")
	}
}
*/

/*#include <stdio.h>
int main() {
	int i = 3;
	while (i) {
		printf("%d�� ���Դϴ�.\n", i);
		i--;
	}
	printf("%d�� �����Դϴ�.\n", i);
}
*/

/*
#include<stdio.h>
int main() {
	int score = 0,n =0, sum=0;
	float avg = 0.0;
	printf("***���� �� ���� �Է�***\n");

	while (score>=0) {
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &score);

		if (score >= 0) {
			sum += score;
			n++;
		}

	}
	if (n > 0)
		avg = (float)sum / n;
	printf("������ ����� %.1f�Դϴ�\n", avg);
	return 0;

}*/

/*
#include<stdio.h>
int main() {
	int num =0, sum = 0;
	char go= 'Y';
	
	while (go == 'Y' || go == 'y') {
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf_s("%d", &num);

		sum += num;

		printf("���? : ");
		getchar();
		scanf_s("%c", &go);
		
	}
	printf("�Է��� ������ �հ�� %d �Դϴ�", sum);
	return 0;
}
*/

/*
#include<stdio.h>
int main() {
	int num;
	int sum = 0;
	char flag;

	do {
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf_s("%d", &num);
		sum += num;
		getchar();
		printf("���?(Y/n): ");
		scanf_s("%c", &flag, 1);
	}
	while (flag == 'Y' || flag == 'y')
}
*/

/*
#include<stdio.h>
int main() {
	int random, i = 0;
	while (i < 5) {
		random = rand() % 9;
		random = rand() % 9 +1;
		random = rand() % 99 + 1;

		printf("%3d\n", random);
		i++;
	}
}
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(NULL));
	int random, i = 0;

	while (i < 6) {
		random = rand() % 45 + 1;
		printf("%d\n", random);
		i++;
	}
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(NULL));
	int answer, guess; 
	int tries = 0;
	answer = rand() % 100 + 1;

	do {
		printf("���ڸ� ���纸���� >> ");
		scanf_s("%d", &guess);
		tries++;

		if (guess > answer)
			printf("�Է��� ���ڰ� �� Ů�ϴ�. ���� ���� �Է��ϼ���\n");
		else if (guess <answer)
			printf("�Է��� ���ڰ� �� �۽��ϴ�. ū ���� �Է��ϼ���\n");
	} while (answer != guess);

	printf("�����մϴ�. �õ�Ƚ��=%d\n", tries);
}
*/

/*
#include<stdio.h>
int main() {
	int i, n, sum;
	sum = 0;

	while (i <= 5) {
		printf(" ���� �Է��Ͻÿ� : ");
		scanf_s("%d", &n);
		i++;
	}
	printf("�հ�� %d�Դϴ�.\n", sum);

}
*/
/*
#include<stdio.h>
int main() {
	int i, n, sum;
	sum = 0;
	for (i = 1; i <= 5; i++) {
		printf("���� �Է��Ͻÿ� : ");
		scanf_s("%d", &n);
		scanf_s("%d", &n);
	}
	printf("�հ�� %d�Դϴ�.\n", sum);
}*/
/*
#include<stdio.h>
int main() {
	int fact=1;
	int i, num;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &num);

	for (i = num; i >=1 ; i--) {
		fact = fact * i;
	}
	printf("%d!�� %d�Դϴ�.\n", num, fact);
}*/
/*
#include<stdio.h>
int main() {
	int pi = 1;
	int i;
	printf("�� ��° �ױ��� ���ұ��? ");
	scanf_s("%d", i);

	for (i = 0; i = i; i--) {
		pi += pi;
	}
	printf("%pi");
}*/

/*
#include<stdio.h>
int main() {
	int i, a = 1, b = 1, c, n;
	printf("�� ��° �ױ��� ���ұ��?");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		printf("%d", a);
		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}*/