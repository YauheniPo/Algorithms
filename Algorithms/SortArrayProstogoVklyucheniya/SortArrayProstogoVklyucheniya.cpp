#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void main(void) {
	const int N = 5;
	double arr[N];
	double y;
	int j = 0;

	srand(time(0));
	for(int i = 0; i < N; ++i) {
		arr[i] = (rand() % 100 - 50) - (rand() % 100 - 50) / 100.0;
	}

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}

	printf("\n\n");

	for(int i = 1; i < N; ++i) {
		y = arr[i];
		j = i - 1;
		while(y < arr[j] && j >= 0) {
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = y;
	}

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}
		
	_getch();
	return;
}