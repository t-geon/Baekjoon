#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> num(n);

	for (int i = 0; i < n; i++) {
		cin >> num.at(i);
	}

	int max = 0;
	for (vector<int>::iterator iter = num.begin(); iter != num.end(); iter++) {
		for (vector<int>::iterator iter1 = iter+1; iter1 != num.end(); iter1++) {
			for (vector<int>::iterator iter2 = iter1+1; iter2 != num.end(); iter2++) {
				int sum = *iter + *iter1 + *iter2;
				if (sum <= m && sum>max) { max = sum; }
			}
		}
	}

	cout << max;

	return 0;
}