#include<iostream>
using namespace std;

int main() {
	int h, m;	//h는 시, m은 분
	cin >> h >> m;

	if (m < 45) {
		if (h == 0) { h = 23; }
		else { h--; }
		m = 60 + (m - 45);
	}
	else { m = m-45; }

	cout << h <<" " << m;

	return 0;
}