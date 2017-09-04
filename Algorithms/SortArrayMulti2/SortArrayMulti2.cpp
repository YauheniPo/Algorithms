#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void main(void) {
	const int N = 4, M = 3;
	int arr[N][M], y[N] = {0};
	int k1, buf;

	srand(time(NULL));
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			*(*(arr + i) + j) = rand() % 100 - 50;
			y[i] += arr[i][j];
		}
	}

	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			printf("[%d][%d] = %-4d ", i, j, *(*(arr + i) + j));
		}
		printf("\n");
	}

	printf("\n");

	printf("Sum of array elements: ");
	for(int j = 0; j < N; ++j) {
		printf("[%d] = %-4d ", j, *(y + j));
	}

	printf("\n");

	for(int k = N/2; k > 0; k /= 2) {
		do {
			k1 = 0;
			for(int i = 0, j = k; j < N; ++i, ++j) {
				if(y[i] > y[j]) {
					buf = y[i];
					y[i] = y[j];
					y[j] = buf;
					++k1;
					for(int t = 0; t < M; ++t) {
						buf = arr[i][t];
						arr[i][t] = arr[j][t];
						arr[j][t] = buf;
					}
				}
			}
		} while(k1);
	}

	printf("\n");

	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			printf("[%d][%d] = %-4d ", i, j, *(*(arr + i) + j));
		}
		printf("\n");
	}

	printf("\n");

	printf("Sum of array elements: ");
	for(int j = 0; j < N; ++j) {
		printf("[%d] = %-4d ", j, *(y + j));
	}
	
	_getch();
	return;
}