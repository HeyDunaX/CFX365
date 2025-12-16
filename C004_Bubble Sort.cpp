#include <iostream>

using namespace std;

int main () {
	int N;
	cout << "nhap N" << endl;
	cin >> N;
	int A[100];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = N-1; i > 0; i--){
		for (int j = 0; j < i; j++) {
			if (A[j+1] > A[j]) {
				int tmp = A[j];
				A[j] = A[j + 1];
				A[j+1] = tmp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		cout << A[i] << " ";
	}
	return 0;
	
}
