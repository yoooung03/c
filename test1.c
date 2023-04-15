/*#include <stdio.h>
int main() {
	int user, change = 0;
	int price, c5000, c1000, c500, c100;

	printf("물건값을 입력하시오: ");
	scanf_s("%d", &price);
	printf("사용자가 낸 돈:");
	scanf_s("%d", &user);
	change = user - price;

	c5000 = change / 5000;
	change = change % 5000;
	c1000 = change / 1000;
	change = change % 1000;
	c500 = change / 500;
	change = change % 500;
	c100 = change / 100;
	change = change % 100;

	printf("오천원권: %d장\n", c5000);
	printf("천원권: %d장\n", c1000);
	printf("오백원 동전: %d개\n", c500);
	printf("백원 동전: %d개\n", c100);


	return 0;
}
*/

/*#include<stdio.h>
int main() {


	int a = 5, b = 10;
	a++;
	--b;
	a = b % a;
	b = --a + ++b;

	printf("a=%d, b=%d", a, b);

	return 0;
	*/

	/*int x = 10, y = 20;
	printf("x = %d\n", x++);
	printf("x = %d\n", ++x);
	printf("y = %d\n", y--);
	printf("y = %d\n", --y);

	return 0; */

	/*int x = 10, y = 10;
	printf("x=%d\n", x);
	printf("++x의 값= %d\n", ++x);
	printf("x=%d\n\n", x);

	printf("y=%d\n", y);
	printf("y++의 값= %d\n", y++);
	printf("y=%d\n\n", y);

	return 0;
}*/