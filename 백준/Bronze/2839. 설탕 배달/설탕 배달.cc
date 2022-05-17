#include<iostream>
using namespace std;

int main() {
	int n, num = 0;
	cin >> n;

	if (n % 5 == 0) {
		cout << n / 5;
		return 0;
	}
	else {
		if (n % 5 == 3) { 
			cout << n / 5 + 1;
			return 0; 
		}
		else{
			for (int i = (n / 5)-1; i >=0; i--) {
				int temp = n - (i * 5);
				if (temp % 3 == 0) {
					cout << i + (temp / 3);
					return 0;
				}
			}
		}
	}
	cout << -1;
	
	return 0;
}