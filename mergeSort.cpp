#include <stdio.h>
#include <stdlib.h>
# include <iostream> 

using namespace std;

void printSort(int A[], int n);
void merge(int A[], int p, int q, int r);
void mergeSort(int A[], int p, int r);

int main() {
	int A [] = { 16, 2, 77, 40, 12071 };
	int n = (sizeof(A) / sizeof(*A));
	printSort(A, n);
	mergeSort(A, 0, n - 1);
	cout << endl << "Merge Sorted:" << endl;
	printSort(A, n);
	return 0;
}

void mergeSort(int A[], int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(A, p, q);
		mergeSort(A, q+1, r);
		merge(A, p, q, r);
	}
}

void merge(int A[], int p, int q, int r) {
	int n1 = q - p + 1;
	int n2 = r - q;
	int L[n1+1];
	int R[n2+1];
	for(int i = 0; i < n1; i++) {
		L[i] = A[p + i];
	}
	for(int j = 0; j < n2; j++) {
		R[j] = A[q + j + 1];
	}
	L[n1] = 100000000000;
	R[n2] = 100000000000;
	
	int i = 0;
	int j = 0;
	
	for(int k = p; k <= r; k++) {
		if(L[i] <= R[j]) {
			A[k] = L[i];
			i++;
		}else {
			A[k] = R[j];
			j++;
		}
	}
	 
}


void printSort (int A[], int n) {
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
}


