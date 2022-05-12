#include<iostream>
#include<string>
using namespace std;

int main() {
	int c,p=1,sum=0;
	cin >> c;

	string *a = new string[c];
	for (int i = 0; i < c; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < c; i++) {
		for (int j = 0; j < a[i].length(); j++) {
			if (a[i][j] == 'O') {	//맞은 문제면
				sum += p;
				p++;
			}
			else { p = 1; }
		}
		cout << sum << "\n";
		sum = 0;
		p = 1;
	}

	return 0;
}