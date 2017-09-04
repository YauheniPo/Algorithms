#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void Init_arr(double arr[], int N);
void Print_arr(double arr[], int N);

void main(void) {
	const int N1 = 5, N2 = 7, M = N1 + N2;
	double arr1[N1];	
	double arr2[N2];	

	srand(time(0));
	Init_arr(arr1, N1);
	Init_arr(arr2, N2);

	Print_arr(arr1, N1);
	s
	printf("\n\n");

	Print_arr(arr2, N2);

	printf("\n\n");

		
			
	_getch();
	return;
}

void Init_arr(double arr[], int N) {
	for(int i = 0; i < N; ++i) {
		arr[i] = (rand() % 100 - 50) - (rand() % 100 - 50) / 100.0;
	}
}

void Print_arr(double arr[], int N) {
	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-8.2lf", i, arr[i]);
	}
}