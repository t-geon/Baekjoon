#include<iostream>
using namespace std;

int d(int a) {
	int sum = a;
	
	while (a > 0) {
		sum += (a % 10);
		a /= 10;
	}

	return sum;
};

int main() {
	int num[10000] = { 0, };
	int q = 0;
	for (int i = 1; i < 10000; i++) {
		q = d(i);
		if (q < 10000) { num[q]++; }
	}
	for (int i = 1; i < 10000; i++) {
		if (num[i] == 0) { cout << i << "\n"; }
	}
	return 0;
}