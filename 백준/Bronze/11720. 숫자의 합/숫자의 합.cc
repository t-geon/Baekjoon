#include<iostream>
#include<string>
using namespace std;

int main() {
	int c, sum=0;
	cin >> c;

	string num;
	cin >> num;

	for (int i = 0; i < c; i++) {
		sum += (int)num[i] - 48;
	}
	cout << sum;

	return 0;
}