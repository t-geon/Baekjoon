#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int c, peo;
	cin >> c;


	for (int i = 0; i < c; i++) {
		cin >> peo;	//사람수
		int* per = new int[peo];
		int avg = 0;
		double up = 0;

		for (int j = 0; j < peo; j++) {//점수 입력
			cin >> per[j];
			avg += per[j];	//총합
		}
		avg /= peo;
		
		for (int k = 0; k < peo; k++) {
			if (per[k] > avg) { up++; }
		}
	
		double d = up / peo * 100;
		cout << fixed;
		cout.precision(3);
		cout << round(d * 1000) / 1000<<"%\n";
		up = 0;
	}

	return 0;
}