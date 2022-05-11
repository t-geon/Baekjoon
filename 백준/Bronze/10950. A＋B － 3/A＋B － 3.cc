#include<iostream>
using namespace std;

int main() {
	int count,a, b;
	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> a >> b;
		cout << a + b<<"\n";
	}

	return 0;
}