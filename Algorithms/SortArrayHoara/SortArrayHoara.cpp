#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void Sort_arr(double arr[], int L, int R);

void main(void) {
	const int N = 5;
	double arr[N];	

	srand(time(0));
	for(int i = 0; i < N; ++i) {
		arr[i] = (rand() % 100 - 50) - (rand() % 100 - 50) / 100.0;
	}

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}

	printf("\n\n");

	Sort_arr(arr, 0, (N-1));

	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}
		
	_getch();
	return;
}

void Sort_arr(double arr[], int L, int R) {
	double SR = arr[(L+R)/2];
	int i = L, j = R;
	double buf;

	do {
		while(arr[i] < SR)
			++i;
		while(arr[j] > SR)
			--j;
		if(i <= j) {
			buf = arr[i];
			arr[i] = arr[j];
			arr[j] = buf;
			++i;
			--j;
		}
	} while(i <= j);
	if(i < R)
		Sort_arr(arr, i, R);
	if(j > L)
		Sort_arr(arr, L, j);
}