#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<pair<int,int>> per;
	int h, w;
	for (int i = 0; i < n; i++) {
		cin >> h >> w;
		per.push_back(make_pair(h, w));
	}

	int rank[50] = { 0, };

	for (int i = 0; i < per.size(); i++) {
		int big = 1;
		for (int j = 0; j < per.size(); j++) {
			if (per[i].first < per[j].first && per[i].second < per[j].second) {
				big++; 
			}
		}
		rank[i] = big;
	}

	for (int i = 0; i < per.size(); i++) {
		cout << rank[i] << " ";
	}

	return 0;
}