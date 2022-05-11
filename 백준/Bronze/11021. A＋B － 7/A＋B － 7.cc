#include<iostream>
using namespace std;

int main() {
	int count, a, b;
	cin >> count;
	for (int i = 1; i <= count;i++) {
		cin >> a >> b;
		cout << "Case #"<<i<<": " << a + b << "\n";
	}

	return 0;
}