#include<iostream>
#include<vector>
using namespace std;

int main() {
	string s;
	cin >> s;

	int len = s.length();
	vector<int> al(26);
	fill(al.begin(), al.end(), 0);
	int asc;

	for (int i = 0; i < len; i++) {
		asc = (int)s[i];
		if (96 < asc) { asc -= 97; }
		else { asc -= 65; }
		al[asc]++;
	}

	int max = 0, index = -1;
	for (int i = 0; i < 26;i++) {	//최대값 찾기
		if (max < al[i]) { max = al[i]; index = i; }
	}
	for (int i = 0; i < 26; i++) {	//중복인지 확인
		if (max == al[i] && index != i) {
			cout << "?";
			return 0;
		}
	}
	cout << (char)(index + 65);

	return 0;
}