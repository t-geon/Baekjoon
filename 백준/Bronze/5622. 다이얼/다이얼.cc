#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	vector<string> al;
	al.push_back("ABC"); al.push_back("DEF"); al.push_back("GHI"); al.push_back("JKL"); 
	al.push_back("MNO"); al.push_back("PQRS"); al.push_back("TUV"); al.push_back("WXYZ");

	string s;
	cin >> s;

	int len = s.length();
	int sum = 0;
	
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 8; j++) {
			if (al[j].find(s[i]) != string::npos) {
				sum += (j + 3);
				break;
			}
		}
	}
	
	cout << sum;

	return 0;
}