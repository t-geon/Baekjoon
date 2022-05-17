#include<iostream>
#include<cmath>
using namespace std;

int main() {
	while (1) {
		int num, rt;
		cin >> num;
		if (num == 0) { break; }

		int sum = 0;

		//소수 구하는 방법 1929번 참조
		//해당 범위내에서 확인할 값을 sqrt(루트)씌운후
		//1, 2, 3일 때 처리한 뒤 홀수 인 경우 rt가 될 때까지 나눠가면서 확인
		for (int i = num+1; i <= 2 * num; i++) {
			rt = sqrt(i);	//제곱근 구하기
			
			if (i == 1) { ; }
			else if (i == 2 || i == 3) { sum++;}
			else if(i%2!=0) {	//홀수이면
				for (int j = 2; j <= rt; j++) {
					if (i % j == 0) { break; }
					if (j == rt) {	//j가 rt와 같은데 break가 없었기 떄문에 소수이다.
						sum++;
					}
				}
			}
		}
        cout << sum<<"\n";
	}

	return 0;
}