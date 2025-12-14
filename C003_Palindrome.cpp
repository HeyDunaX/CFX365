#include <bits/stdc++.h>
using namespace std;

bool isPalindrome (int x) {
	if ( x < 0 || (x%10==0 && x!=0))
	return false;
	int rev = 0;
int orig = x;

while (x > rev) {
	rev = rev*10 + x%10;
	x /= 10;
}

return (x==rev) || (x == rev/10);
}


int main () {
	int x;
	cout << "Nhap x" << endl;
	cin >> x;
	
	if (isPalindrome(x)){
		cout << x << endl;
	}else{
		cout << "Khong phai palindrome";
	}
	return 0;
}
