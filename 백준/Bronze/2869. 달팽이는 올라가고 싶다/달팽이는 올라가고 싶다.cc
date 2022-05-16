#include<iostream>
using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;


	int h = 0, day = 0;
	day = (v - b) / (a - b);
	if ((v - b) % (a - b) != 0) { day++; }
	cout << day;

	return 0;
}