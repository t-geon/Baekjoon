#include<iostream>
using namespace std;

int main() {
	int a, div = 2;
	cin >> a;

	while (a > 1) {
		if (a % div == 0) {
			cout << div<<"\n";
			a = a / div; 
		}
		else { div++; }
	}

	return 0;
}