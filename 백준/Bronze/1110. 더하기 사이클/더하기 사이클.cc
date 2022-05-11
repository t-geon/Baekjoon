#include<iostream>
using namespace std;

int main() {
	int a, b,r=100,c=0;
	cin >> a;
	int o = a;

	while (r != o) {
		if (a < 10) {
			a = a * 10 + a;
			r = a;
		}
		else {
			b = a % 10;//a의 1의자리
			a /= 10;//a의 10의자리
			a = (b * 10) + (a + b) % 10;
			r = a;
		}
		c++;
	}
	cout << c;

	return 0;
}
