/* 
변수는 메모리, 메모리는 주소를 가진다.
float은 소수점이하 6자리까지 double은 15자리까지 근삿값에 의한 오류가 없다. (double만 사용)
문자열은 문자의 배열이다.
*/

#include <stdio.h>

int main(void) {
	int a = 10;
	printf("%d\n", a);

	float b = 123.45F;
	double c = 123.45;
	printf("%f\n", b);
	printf("%f\n", c);

	char d = 'A';
	printf("%c\n", d);

	return 0;
}
