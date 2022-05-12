#include<iostream>
//#include<algorithm>
using namespace std;

int main() {
	int max = 0, c, num;

	for (int i = 1; i <=9; i++) {
		cin >> num;
		if (max < num) { 
			max = num;
			c = i;
		}
	}

	cout << max << "\n" << c;
	return 0;
}