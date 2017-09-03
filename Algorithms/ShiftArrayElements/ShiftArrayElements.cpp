#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void main(void) {
	const int N = 5;
	double arr[N];
	int k = 3;
	double buf;

	srand(time(0));
	for(int i = 0; i < N; ++i) {
		arr[i] = (rand() % 100 - 50) - (rand() % 100 - 50) / 100.0;
	}

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}

	printf("\n\n");

	for(int t = 0; t < k; ++t) {
		buf = arr[0];
		for(int i = 0; i < N-1; ++i) {
			arr[i] = arr[i+1];
		}
		arr[N-1] = buf;
	}

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}

	_getch();
	return;
}