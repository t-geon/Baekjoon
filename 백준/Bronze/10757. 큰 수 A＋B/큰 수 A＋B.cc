#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	vector<char> r;
	string big, small;

	//문자열 길이 비교
	if (a.length() >= b.length()) { big = a; small = b; }
	else { big = b; small = a; }

	int blen = big.length(), slen = small.length();
	int result = 0, position = 0, temp = 0;

	//작은 길이 만큼은 두개의 값 더함
	for (;position < slen; position++) {	//두 값 더하기
		result = (int)big[blen - position-1] + (int)small[slen - position-1] - 96 + temp;
		r.push_back((char)((result % 10) + 48));	//더한 값 삽입
		temp = result / 10;
	}

	//작은 길이~큰길이 까지는 큰 값만 더해주면 됨
	for (; position < blen; position++) {	//남은 큰수만 더하기
		result = (int)big[blen - position-1] - 48 + temp;
		r.push_back((char)((result % 10) + 48));	//더한 값 삽입
		temp = result / 10;
	}

	if (temp == 1) {
		r.push_back('1');
	}

	reverse(r.begin(), r.end());
	for (vector<char>::iterator iter = r.begin(); iter != r.end(); iter++) {
		cout << *iter;
	}


	return 0;
}