#include<iostream>
#include<vector>
using namespace std;

int main() {
	int c, h, w, n;
	cin >> c;

	for (int i = 0; i < c; i++) {
		cin >> h >> w >> n;
	
		int f, ho;
		if (n % h == 0) { //딱 나눠 떨어지면 최고층
			ho = n / h; 
			f = h; 
		}
		else { //(번쨰/층)+1 -> 1의자리~10의자리 -> 호, 번째%층 -> 100의자리 -> 층
			ho = n / h + 1;
			f = n % h;
		}
		if (ho < 10) {f *= 10;}
		cout << f << ho<<"\n";
	}

	

	return 0;
}