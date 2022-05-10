#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a == b && b == c) {//다같음
		cout << 10000 + (a * 1000);
	}
	else if (a == b) {//2개만 같음
		cout << 1000 + a * 100;
	}
	else if (a == c) {//2개만 같음
		cout << 1000 + a * 100;
	}
	else if (b == c) {//2개만 같음
		cout << 1000 + b * 100;
	}
	else {
		if (a < b) { a = b; }
		if (a < c) { a = c; }
		cout << a * 100;
	}

	return 0;
}