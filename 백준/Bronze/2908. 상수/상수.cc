#include<iostream>
#include<vector>
using namespace std;

void print(vector<char> a) {
	for (vector<char>::iterator iter = a.begin(); iter != a.end(); iter++) {
		cout << *iter;
	}
}

int main() {
	string a="", b = "";
	cin >> a >> b;

	vector<char> aa;
	vector<char> bb;
	
	for (int i = 0; i < 3; i++) {
		aa.push_back(a.at(-(i - 2)));
		bb.push_back(b.at(-(i - 2)));
	}

	for (int i = 0; i < 3; i++) {
		if (aa.at(i) == bb.at(i)) { continue; }
		else if (aa.at(i) > bb.at(i)) { print(aa); return 0; }
		else { print(bb); return 0; }
	}

	return 0;
}
