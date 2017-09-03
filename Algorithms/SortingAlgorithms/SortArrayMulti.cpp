#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void main()
{
	int temp;
	const int N = 2, M = 3;
	int arr[N][M];
	srand(time(NULL));
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			*(*(arr + i) + j) = rand() % 100 - 50;
		}
	}
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			printf("[%d][%d] = %-4d ", i, j, *(*(arr + i) + j));
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 0; i<N*M; ++i) {
		for(int j = 0; j<M*N; ++j) {
			if(arr[i/M][i%M] < arr[j/M][j%M]) {
				temp = arr[i/M][i%M];
				arr[i/M][i%M] = arr[j/M][j%M];
				arr[j/M][j%M] = temp;
			}
		}
	}
	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < M; ++j) {
			printf("[%d][%d] = %-4d ", i, j, *(*(arr + i) + j));
		}
		printf("\n");
	}

	_getch();
	return;
}