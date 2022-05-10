#include<iostream>
using namespace std;

int main() {
	int a, b, div=10, temp;
	cin >> a;
	cin >> b;
	temp = b;

	for (int i = 0; i < 3; i++) {
		cout << a * (b % 10)<<"\n";
		b /= 10;
	}
	cout << a * temp;

	return 0;
}