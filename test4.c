/*#include<stdio.h>
int main() {
	int i = 1,n, sum = 0;

	printf("정수를 입력하시오 : ");
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
		printf("값을 입력하시오 : ");
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
	printf("단을 입력하세요 : ");
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
		printf("%d는 참입니다.\n", i);
		i--;
	}
	printf("%d은 거짓입니다.\n", i);
}
*/

/*
#include<stdio.h>
int main() {
	int score = 0,n =0, sum=0;
	float avg = 0.0;
	printf("***종료 시 음수 입력***\n");

	while (score>=0) {
		printf("성적을 입력하시오 : ");
		scanf_s("%d", &score);

		if (score >= 0) {
			sum += score;
			n++;
		}

	}
	if (n > 0)
		avg = (float)sum / n;
	printf("성적의 평균은 %.1f입니다\n", avg);
	return 0;

}*/

/*
#include<stdio.h>
int main() {
	int num =0, sum = 0;
	char go= 'Y';
	
	while (go == 'Y' || go == 'y') {
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &num);

		sum += num;

		printf("계속? : ");
		getchar();
		scanf_s("%c", &go);
		
	}
	printf("입력한 숫자의 합계는 %d 입니다", sum);
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
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &num);
		sum += num;
		getchar();
		printf("계속?(Y/n): ");
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
		printf("숫자를 맞춰보세요 >> ");
		scanf_s("%d", &guess);
		tries++;

		if (guess > answer)
			printf("입력한 숫자가 더 큽니다. 작은 수를 입력하세요\n");
		else if (guess <answer)
			printf("입력한 숫자가 더 작습니다. 큰 수를 입력하세요\n");
	} while (answer != guess);

	printf("축하합니다. 시도횟수=%d\n", tries);
}
*/

/*
#include<stdio.h>
int main() {
	int i, n, sum;
	sum = 0;

	while (i <= 5) {
		printf(" 값을 입력하시오 : ");
		scanf_s("%d", &n);
		i++;
	}
	printf("합계는 %d입니다.\n", sum);

}
*/
/*
#include<stdio.h>
int main() {
	int i, n, sum;
	sum = 0;
	for (i = 1; i <= 5; i++) {
		printf("값을 입력하시오 : ");
		scanf_s("%d", &n);
		scanf_s("%d", &n);
	}
	printf("합계는 %d입니다.\n", sum);
}*/
/*
#include<stdio.h>
int main() {
	int fact=1;
	int i, num;
	printf("정수를 입력하시오:");
	scanf_s("%d", &num);

	for (i = num; i >=1 ; i--) {
		fact = fact * i;
	}
	printf("%d!은 %d입니다.\n", num, fact);
}*/
/*
#include<stdio.h>
int main() {
	int pi = 1;
	int i;
	printf("몇 번째 항까지 구할까요? ");
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
	printf("몇 번째 항까지 구할까요?");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		printf("%d", a);
		c = a + b;
		a = b;
		b = c;
	}
	return 0;
}*/