#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string s;
	cin >> s;

	int len = s.length();
	int minus_len = 0;

	vector<string> al;
	al.push_back("c="); al.push_back("c-"); al.push_back("dz="); al.push_back("d-");
	al.push_back("lj"); al.push_back("nj"); al.push_back("s="); al.push_back("z=");

	string s_temp = s;	//검사하면서 변형될 문자열

	for (int j = 0; j < 8; j++) {	//크로아티아 알파벳 확인 반복
		while (s_temp.find(al.at(j)) != string::npos) {
			minus_len += (al.at(j).length() - 1);	//실제 알파벳 길이 -1 해서 넣기(해당 문자열이 크로아티아 알파벳 1개라서)
			int index = s_temp.find(al.at(j));	//인덱스 저장
			for (int i = index; i < index + al.at(j).length(); i++) { s_temp[i] = ' '; }
		}
	}
	
	cout << len - minus_len;
	return 0;
}