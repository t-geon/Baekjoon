#include<iostream>
using namespace std;

int main() {
	int h, m, s, t;
	cin >> h >> m >> s;
	cin >> t;
	
	m += (s + t) / 60;
	s = (s + t) % 60;

	h += m / 60;
	m = m % 60;

	h %= 24;
	printf("%d %d %d", h, m, s);
	
	return 0;
}