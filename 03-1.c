#include <stdio.h>

int main()
{
	// 문제 1
	int num1, num2;
	scanf("%d %d", &num1, &num2);	
	printf("%d %d \n", num1 - num2, num1 * num2);

	// 문제 2
	int num3, num4, num5;
	scanf("%d %d %d", &num3, &num4, &num5);
	printf("%d x %d + %d = %d \n", num3, num4, num5, num3 * num4 + num5);

	// 문제 3
	int num6;
	scanf("%d", &num6);
	printf("%d \n", num6 * num6);

	// 문제 4
	int num7, num8;
	scanf("%d %d", &num7, &num8);
	printf("%d %d \n", num7 / num8, num7 % num8);

	// 문제 5
	int num9, num10, num11;
	scanf("%d %d %d", &num9, &num10, &num11);
	printf("%d \n", (num9 - num10) * (num10 + num11) * (num11 % num9));
	return 0;
}
