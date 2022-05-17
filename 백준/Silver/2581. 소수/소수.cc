#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void s(int a, vector<int>* v) {
	if (a == 1) { return; }
	for (int i = 2; i < a; i++) {
		if (a % i == 0) { return ; }
	}
	v->push_back(a);
}

int main() {
	int m, n, sum=0;
	cin >> m >> n;

	vector<int> a;
	for (int i = m; i <= n; i++) {
		s(i,&a);
	}

	sort(a.begin(), a.end());

	if (a.empty()) {
		cout << -1;
	}
	else {
		for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++) {
			sum += *iter;
		}
		cout << sum << "\n" << a.front();
	}
	return 0;
}