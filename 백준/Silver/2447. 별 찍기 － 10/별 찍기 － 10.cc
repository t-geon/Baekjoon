#include<iostream>
using namespace std;

int a;
int arr[6561][6561] = { 0, };

void star(int s) {
	if (s == 1) { return; }
	int br = s / 3;

	//큰 것들 부터 해당 자리에 빈칸 뚫기
	for (int q = br; q < a; q += br * 3) {	//빈칸 뚫을 때 br*3씩 증가하면서 a행까지 반복
		for (int i = q; i < q + br; i++) {	//행 반복
			for (int z = br; z < a; z += br * 3) {	//빈칸 뚫을 때 br*3씩 증가하면서 a열까지 반복
				for (int j = z; j < z + br; j++) {	//열 반복
					arr[i][j] = 1;	//1인 곳은 빈칸으로 출력할거임
				}
			}
		}
	}
	star(s / 3);
}

int main() {
	cin >> a;

	star(a);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (arr[i][j] == 0) { cout << "*"; }
			else { cout << " "; }
		}
		cout << "\n";
	}

	return 0;
}