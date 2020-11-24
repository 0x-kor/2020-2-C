#include <stdio.h>

#define SIZE 5

int main(void) {
	int score[SIZE];

	score[0] = 78;
	score[1] = 97;
	score[2] = 85;
	//배열 4번째 원소에 값 저장하지 않아 쓰레기값 저장
	score[4] = 91;
	//score[5] = 50; //문법오류는 발생하지 않으나 실행 오류 발생

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", score[i]);
	}
	printf("\n");

	return 0;
}