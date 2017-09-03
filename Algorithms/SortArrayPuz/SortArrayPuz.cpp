#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void main(void) {
	const int N = 5;
	double arr[N];
	double buf;

	srand(time(0));
	for(int i = 0; i < N; ++i) {
		arr[i] = (rand() % 100 - 50) - (rand() % 100 - 50) / 100.0;
	}

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}

	printf("\n\n");

	for(int i = 0; i < N; ++i) {
		for(int j = 0; j < N - i - 1; ++j) {
			if(arr[j] > arr[j+1]) {
				buf = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = buf;
			}
		}
	}

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}
	
	_getch();
	return;
}