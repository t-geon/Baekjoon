#include<iostream>
#include<vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	int len = s.length();

	vector<int> po(26);
	fill(po.begin(), po.end(), -1);

	for (int i = 0; i < len; i++) {
		if (po[((int)s[i]-97)]==-1) {
			po[((int)s[i] - 97)] = i;
		}
	}
	
	for (vector<int>::iterator iter = po.begin(); iter != po.end(); iter++) {
		cout << *iter << " ";
	}

	return 0;
}