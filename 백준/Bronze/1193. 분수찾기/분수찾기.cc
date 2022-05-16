#include<iostream>
using namespace std;

int main() {
	int a, layer = 0;
	cin >> a;

	while (a>0) {	//몇번째 대각선에 있는 값인지 확인
		layer++;
		a -= layer;
	}
	
	a += layer;	//layer번째 대각선에서 몇번째 값인지(1부터 시작)

	if (layer % 2 == 0) {//짝수번째 대각선은 위에서 아래로
		cout << a << "/" << layer - a + 1;
	}
	else {//홀수번째 대각선은 아래에서 위로
		cout << layer - a + 1 << "/" << a;
	}
	
	return 0;
}