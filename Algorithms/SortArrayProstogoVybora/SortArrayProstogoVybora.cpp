#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void main(void) {
	const int N = 5;
	double arr[N];
	int k;
	double buf;

	srand(time(0));
	for(int i = 0; i < N; ++i) {
		arr[i] = (rand() % 100 - 50) - (rand() % 100 - 50) / 100.0;
	}

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}

	printf("\n\n");

	for(int i = 0; i < N - 1; ++i) {
		k = i;
		for(int j = i + 1; j < N; ++j) {
			if(arr[k] > arr[j]) {
				k = j;
			}
		}
		buf = arr[i];
		arr[i] = arr[k];
		arr[k] = buf;
	}

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}
	
	_getch();
	return;
}