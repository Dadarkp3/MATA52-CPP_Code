#include <stdio.h>
#include <stdlib.h>
# include <iostream> 

using namespace std;

void insertionSort (int A[], int n);
void printSort(int A[], int n);

int main() {
	int A [] = { 16, 2, 77, 40, 12071 };
	int n = 5;
	insertionSort(A, n);
	printSort(A, n);
	return 0;
}

void insertionSort (int A[], int n) {
	int chave, i = 0;
	for (int j = 1; j < n; j++) {
		chave = A[j];
		i = j - 1;
		while (i >= 0 && A[i] > chave) {
			A[i + 1] =  A[i];
			i = i - 1;
		}
		A[i + 1] = chave;
	}
}

void printSort (int A[], int n) {
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
}
