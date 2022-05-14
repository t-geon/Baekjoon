#include<iostream>
using namespace std;

string makes(int r, string s) {
	string temp="";
	int len = s.length();
	for (int j = 0; j < len; j++) {
		for (int i = 0; i < r; i++) {
			temp+=s[j];
		}
	}
	return temp;
}

int main() {
	int c, r;
	string s;
	cin >> c;

	for (int i = 0; i < c; i++) {
		cin >> r >> s;
		cout << makes(r, s)<<"\n";
	}

	return 0;
}