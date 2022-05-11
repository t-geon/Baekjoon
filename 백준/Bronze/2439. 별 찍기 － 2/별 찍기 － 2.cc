#include<iostream>
using namespace std;

int main() {
	int count;
	cin >> count;
	for (int i = 1; i <= count; i++) {
		int a = count - i;
		for (int j = 1; j <= count; j++) { 
			if (j <= a) { cout << " "; }
			else { cout << "*"; }
		}
		cout << "\n";
	}

	return 0;
}