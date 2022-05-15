#include<iostream>
#include<string>
using namespace std;

int main() {
	string s="";
	getline(cin, s);

	int len = s.length();
	int c = 0;

	for (int i = 0; i < len; i++) {
		if (s.at(i) == ' ') {
			if (i == 0) {
				continue;
			}
			else if (i == len - 1) {
				c++;
			}
			else {
				c++;
			}
		}
	}

	if (s.at(len - 1) != ' ') { c++; }

	cout << c;
	return 0;
}
