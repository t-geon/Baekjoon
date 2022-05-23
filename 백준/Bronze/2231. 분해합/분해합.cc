#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int max = 1;
	for (int i = 10; i < num; i *= 10) { max++; }

	int min = 1000000, temp, sum;
	for (int i = num - (max * 9); i < num; i++) {
		sum = i;
		temp = i;
		for (int j = 0; j < max; j++) {
			sum += (temp % 10);
			temp = temp / 10;
		}
		if (num == sum) {
			if (min > sum) { min = i; }
		}
	}
	if (min == 1000000) { cout << 0; }
	else { cout << min; }

	return 0;
}