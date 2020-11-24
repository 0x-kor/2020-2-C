#include <stdio.h>

//int add2(int a, int b); //이 위치도 가능

int main(void) {
	int a = 3, b = 5;
	int add2(int a, int b);

	//위 함수 원형이 없으면 함수 호출에서 오류 발생
	int sum = add2(a, b);
	printf("합: %d\n", sum);

	return 0;
}

//함수 add2의 함수 구현, 함수 정의 부분
int add2(int a, int b) {
	int sum = a + b;
	return (sum); //괄호는 생략가능
}

//이 함수는 실행되지 않음 (main 함수에서의 호출이 없음)
int findMin2(int x, int y) {
	int min = x < y ? x : y;

	return (min);
}
