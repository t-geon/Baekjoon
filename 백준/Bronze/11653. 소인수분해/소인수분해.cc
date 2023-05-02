#include<iostream>
using namespace std;

int main() {
	int a, div = 2;
	cin >> a;

	while (a >= div) {
		if (a % div == 0) {
			cout << div<<"\n";
			a /= div; 
		}
		else { div++; }
	}

	return 0;
}