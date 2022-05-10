#include<iostream>
using namespace std;

int main() {
	int h, m, t;
	cin >> h >> m;	//시작 시간, 분
	cin >> t;	//오븐구이 하는 시간

	if (m + t >= 60) {	//시간 변경 되는 경우
		int uh = (m + t) / 60;	//증가하는 시간
		m = (m + t) % 60;	//변경후 분
		int ch = h + uh;

		if (ch>=24) { h = -(24-ch); }
		else { h = ch; }
	}
	else {	//시간 변경 안되는 경우
		m += t;
	}

	cout << h << " " << m;

	return 0;
}