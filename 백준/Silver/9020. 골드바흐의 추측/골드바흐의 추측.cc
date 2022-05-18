#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
	int c;
	cin >> c;

	for (int i = 0; i < c; i++) {
		int num;
		cin >> num;

		vector<int> s;	//num미만 소수 저장
		
		//소수 구하기
		int rt;
		for (int j = 2; j < num; j++) {
			rt = sqrt(j);
			if (rt == 1) {	//j가 2와 3인경우
				s.push_back(j);	//소수로 저장
				continue;
			}
			if (j % 2) {//홀수이면
				for (int q = 2; q <= rt; q++) {//제곱근 까지만 확인
					if (j % q == 0) {//나눠지는거 -> 소수아님
						break;
					}
					if (q == rt) {
						s.push_back(j);
					}
				}
			}
		}

		int q = 0;	//q가 num의 반보다 커진 위치
		for (; s.at(q) <= num / 2; q++) {//반보다 크거나 같아지는 인덱스 찾기
			if (s.at(q) == num / 2) {	//반과 같으면 그 값 2번 더하면 된다.
				cout << s.at(q) << " " << s.at(q) << "\n";
				q = -1; break;
			}
		}
		if (q == -1) { continue; }//이미 결과 나온경우

		q--;	//q가 num의 반보다 큰 위치기 때문에
		
		for (int w = q; w >= 0; w--) {	//q-1하고 q, q+1,q+2~~~~을 더해서 num하고 같이 지는 경우가 없는지 num보다 커지기 전까지 더하기
			int e = w + 1;
			while(s.at(e) + s.at(w) <= num){ 
				if (s.at(e) + s.at(w) == num) {
					cout << s.at(w) << " " << s.at(e) << "\n";
					w = -1;
					break;
				}
				e++;
			}
		}
		
		//q-1하고 q, q+1,q+2~~~~을 더해서 num하고 같이 지는 경우가 없는지 num보다 커지기 전까지 더하기
		//q-1이 없으면 q-2~~~반복


	}
	
	return 0;
}