#include<iostream>
#include<string>
using namespace std;

int continueword(string w) {
	int al[26],ind[26];
	fill(al, al + 26, 0);	//0~25인덱스 까지 0으로 초기화
	fill(ind, ind + 26, 0);

	int len = w.length(), index = 0;;
	for (int i = 0; i < len; i++) {
		index = (int)w[i] - 97;
		if (al[index] == 0) {	//처음 나온 알파벳이면
			al[index] = 1;	//한번 나온거 체크
		}
		else if (ind[index] != i - 1) {	//이미 나온 알파벳인데 전 index가 i-1이 아니면 연속으로 나온게 아님
			return 0;
		}
		ind[index] = i;
	}
	return 1;
}

int main() {
	int c;
	cin >> c;
	
	string a;
	int count = 0;

	for (int i = 0; i < c; i++) {
		cin >> a;
		count += continueword(a);
	}

	cout << count;

	return 0;
}