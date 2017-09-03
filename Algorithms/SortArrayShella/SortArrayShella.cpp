#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void main(void) {
	const int N = 5;
	double arr[N];
	double buf;
	int k1;

	srand(time(0));
	for(int i = 0; i < N; ++i) {
		arr[i] = (rand() % 100 - 50) - (rand() % 100 - 50) / 100.0;
	}

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}

	printf("\n\n");

	for(int k = N/2; k > 0; k /= 2) {
		do {
			k1 = 0;
			for(int i = 0, j = k; j < N; ++i, ++j) {
				if(arr[i] > arr[j]) {
					buf = arr[i];
					arr[i] = arr[j];
					arr[j] = buf;
					++k1;
				}		
			}
		} while(k1);
	}

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}
		
	_getch();
	return;
}