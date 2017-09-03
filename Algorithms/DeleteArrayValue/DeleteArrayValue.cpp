#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void main(void) {
	int arr[SIZE];
	int n = 10;
	int del_val, k = 0;

	srand(time(0));
	for(int i = 0; i < n; ++i) {
		*(arr + i) = rand() % 10;
	}

	for(int i = 0; i < n; ++i) {
		printf("[%d] = %-5d", i, *(arr + i));
	}
	
	printf("\n\ndelete: ");
	scanf("%d", &del_val);
	printf("\n");

	for(int i = 0; i < n - k; ++i) {
		if(*(arr + i) == del_val) {
			++k;
			for(int j = i; j < n - k; ++j) {
				arr[j] = arr[j + 1];
			}
			--i;
		}
	}
	n -= k;

	for(int i = 0; i < n; ++i) {
		printf("[%d] = %-5d", i, *(arr + i));
	}

	_getch();
	return;
}