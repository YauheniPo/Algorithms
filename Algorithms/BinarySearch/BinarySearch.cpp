#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void Init_arr(int arr[], int N);
void Print_arr(int arr[], int N);
void Sort_arr(int arr[], int N);

void main(void) {
	const int N1 = 5, N2 = 7;
	int arr1[N1];	
	int arr2[N2];
	int k, k1;

	srand(time(0));
	Init_arr(arr1, N1);
	Print_arr(arr1, N1);
	printf("\n\n");

	Init_arr(arr2, N2);
	Print_arr(arr2, N2);
	printf("\n");
	Sort_arr(arr2, N2);
	Print_arr(arr2, N2);
	printf("\n\n");

	for(int i = 0; i < N1; ++i) {
		if(arr1[i] == arr2[N2/2]) {
			printf("%d ", arr1[i]);
			continue;
		}
		if(arr1[i] > arr2[N2/2]) {
			k = (N2 / 2) + 1;
			k1 = N2;
		}
		else {
			k = 0;
			k1 = N2 /2;
		}
		for(int j = k; j < k1; ++j)
			if(arr1[i] == arr2[j]) {
				printf("%d ", arr1[i]);
				break;
			}
	}
				
	_getch();
	return;
}

void Init_arr(int arr[], int N) {
	for(int i = 0; i < N; ++i) {
		arr[i] = rand() % 10;
	}
}

void Print_arr(int arr[], int N) {
	for(int i = 0; i < N; ++i) {
		printf("[%d] = %-4d", i, arr[i]);
	}
}

void Sort_arr(int *arr, int N) {
	int buf;
	int k1;
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
}