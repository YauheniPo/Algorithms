#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void Init_arr(double arr[], int N);
void Print_arr(double arr[], int N);
void Sort_arr(double arr[], int N);

void main(void) {
	const int N1 = 5, N2 = 7, M = N1 + N2;
	double arr1[N1];	
	double arr2[N2];
	double ptr[M];
	int i1 = 0, i2 = 0, i3 = 0;

	srand(time(0));
	Init_arr(arr1, N1);
	Init_arr(arr2, N2);

	Print_arr(arr1, N1);
	printf("\n\n");
	Sort_arr(arr1, N1);
	Print_arr(arr1, N1);
	
	printf("\n\n");

	Print_arr(arr2, N2);
	printf("\n\n");
	Sort_arr(arr2, N2);
	Print_arr(arr2, N2);

	printf("\n\n");

	while((i1 < N1) && (i2 < N2))
		if(arr1[i1] < arr2[i2])
			ptr[i3++] = arr1[i1++];
		else
			ptr[i3++] = arr2[i2++];
		while((i1 < N1) || (i2 < N2))
			if(i1 < N1)
				ptr[i3++] = arr1[i1++];
			else
				ptr[i3++] = arr2[i2++];
		
	Print_arr(ptr, M);
			
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

void Sort_arr(double arr[], int N) {
	double y;
	int j;
	for(int i = 1; i < N; ++i) {
		y = arr[i];
		j = i - 1;
		while(y < arr[j] && j >= 0) {
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = y;
	}
}	