#include<iostream>
#include<vector>
using namespace std;

vector<string> input;

int check(int r, int c) {
	int count_b = 0,count_w=0;
	
	//b로 시작하는거, w로 시작하는거 체크
	for (int i = 0; i < 8; i++) {
		//대각 요소 체크 (총 8번)
		if (input[r + i][c + i] != 'B') { count_b++; }	//b시작 체크
		if (input[r + i][c + i] != 'W') { count_w++; }	//w시작 체크

		for (int j = i+1; j < 8; j++) {
			if ((j+i)% 2 == 0) { //짝수이면 시작과 동일해야함
				//b시작 체크 (B아니면 바꿔야함)
				if (input[r + i][c + j] != 'B') { count_b++; } //같은 행 확인
				if (input[r + j][c + i] != 'B') { count_b++; } //같은 열 확인
				//w시작 체크
				if (input[r + i][c + j] != 'W') { count_w++;}
				if (input[r + j][c + i] != 'W') { count_w++;}
			}
			else {	//홀수이면 시작과 달라야함
				//b시작 체크
				if (input[r + i][c + j] != 'W') { count_b++; }
				if (input[r + j][c + i] != 'W') { count_b++; }
				//w시작 체크
				if (input[r + i][c + j] != 'B') { count_w++;}
				if (input[r + j][c + i] != 'B') { count_w++; }
			}
		}
	}
	if (count_b < count_w) { return count_b; }
	return count_w;
}

int main() {
	int m, n, min = 10000;
	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		string line;
		cin >> line;
		input.push_back(line);
	}

	for (int i = 0; i <= m - 8; i++) {
		for (int j = 0; j <= n - 8; j++) {
			int c = check(i, j);
			if (c < min) { min = c; }
		}
	}

	cout << min;

	return 0;
}