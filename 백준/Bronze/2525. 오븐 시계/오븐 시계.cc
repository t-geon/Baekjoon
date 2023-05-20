#include<iostream>
using namespace std;

int main() {
	int h, m, t;
	cin >> h >> m;
	cin >> t;
	
	h += (m + t) / 60;
	m = (m + t) % 60;
	h %= 24;
	printf("%d %d", h, m);
	
	return 0;
}