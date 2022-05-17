#include<iostream>
#include<vector>
using namespace std;

int s(int a) {
	if (a == 1) { return 0; }
	for (int i = 2; i < a; i++) {
		if (a % i == 0) { return 0; }
	}
	return 1;
}

int main() {
	int c, a, result=0;
	cin >> c;

	vector<int> num;
	for (int i = 0; i < c; i++) {
		cin >> a;
		result += s(a);
	}
	
	cout << result;
	return 0;
}