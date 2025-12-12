#include <iostream>
using namespace std;

int main () {
	long long n;
	cout << "nhap n"<<endl;
	cin >> n;
	
	int A[n];
	cout << "nhap " << n << " phan tu cua mang" <<endl;
	
	for (int i=0; i < n; i++) {
		cin >> A[i];
	}
	
	int C[1001] = {0};
	for (int i=0; i < n; i++) {
		C[A[i]]++;
	}
	for (int i = 0; i <= 1000; i++) {
		if (C[i] > 0) {
			cout << "phan tu " << i << " xuat hien " << C[i] << " lan" << endl;
		}
	}
	return 0;
}
