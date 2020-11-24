#include <stdio.h>

#define ROWSIZE 2
#define COLSIZE 3

int main(void) {
	int td[][3] = { { 1 }, { 1, 2, 3 } };

	printf("¹Ýº¹¹® for¸¦ ÀÌ¿ëÇÏ¿© Ãâ·Â\n");
	for (int i = 0; i < ROWSIZE; i++) {
		for (int j = 0; j < COLSIZE; j++)
			printf("%d ", td[i][j]);
		printf("\n");
	}

	return 0;
}
