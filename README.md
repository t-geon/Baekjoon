# Baekjoon
- \ 또는 " 출력시 앞에 \붙여주기    ex) cout<<"역슬래쉬= \\, 쌍따옴표=\"";
- 3 4를 입력해 A B에 입력 받을 때   ex) cin >> A >> B;
- cout하기 전에 precision(n)을 하면 소수점 아래 n자리만큼 출력됨   오차가 10^-9이하로 나야하면 n=10으로 두면 됨
- 정렬할 때 #include <algorithm>하고 sort(배열이름(첫 인덱스), 배열이름+배열크기(마지막 인덱스))하면 오름차순정렬
  벡터 정렬할 때는 sort(벡터.begin(), 벡터.end()) ->오름차순, sort(벡터.rbegin(), 벡터.rend()) -> 내림차순
- string쓸 때 #include <string> string 길이는 변수이름.length()
- 소수점 고정 출력할 때 cout<<fixed; 하고 cout.precision(소수점 몇번째까지 출력할지); 하고 cout<<하면됨
- 반올림은 #include <cmath>하고  round(변수 * 1000) / 1000 -> 소수점 4번째 자리에서 반올림
- vector는 #include<vector>해서 사용, vector<자료형> 변수명(크기);, fill으로 초기화 가능  ->fill(~.begin(), ~.end(), 초기화 값);
