# Baekjoon
<'---'> 여기서 작은따옴표는 없는게 맞는 설명

- \ 또는 " 출력시 앞에 \붙여주기    ex) cout<<"역슬래쉬= \\, 쌍따옴표=\"";
- 3 4를 입력해 A B에 입력 받을 때   ex) cin >> A >> B;
- cout하기 전에 precision(n)을 하면 소수점 아래 n자리만큼 출력됨   오차가 10^-9이하로 나야하면 n=10으로 두면 됨
- 정렬할 때 #include <'algorithm'>하고 sort(배열이름(첫 인덱스), 배열이름+배열크기(마지막 인덱스))하면 오름차순정렬
  벡터 정렬할 때는 sort(벡터.begin(), 벡터.end()) ->오름차순, sort(벡터.rbegin(), 벡터.rend()) -> 내림차순
- string쓸 때 #include <'string'> string 길이는 변수이름.length()
- 소수점 고정 출력할 때 cout<<fixed; 하고 cout.precision(소수점 몇번째까지 출력할지); 하고 cout<<하면됨
- 반올림은 #include <'cmath'>하고  round(변수 * 1000) / 1000 -> 소수점 4번째 자리에서 반올림
- vector는 #include<'vector'>해서 사용, vector<자료형> 변수명(크기);
    - vector를 사용할 때 iterator는 삽입, 삭제시 다시 정해줘야한다.
    - vector 거꾸로 출력 -> for (vector<int>::reverse_iterator r_iter = vec.rbegin(); r_iter != vec.rend(); r_iter++) {cout << *r_iter << endl;}
    - vector 안에 pair로 2개 값 묶어서 넣을 수 있음
- string 공백 포함 입력 받으려면 #include<string>하고 getline(cin, string변수명) 하면 입력받기 가능
- sort(-,-,comp)하면 comp에서 return a<b이면 오름차순(작->큰) return a>b이면 내림차순(큰->작)
- #include <'queue'>에서 priority_queue 사용하면 오름, 내림차순으로 큐에서 뺄 수 있음 
    - priority_queue<int, vector<int>, greater<int> > q;	// 오름차순
    - priority_queue<int, vector<int>, less<int> > q;	// 내림차순
- #include <'set'>에서 set은 오름차순으로 정렬(중복 안됨), multiset은 오름차순으로 정렬(중복가능)
    - set<int, greater<int>> set;  // 내림차순
    - set.erase(set.find(3));   //set에 있는 3을 제거 (여러개 있으면 1개만 제거)
    - set.find(찾을 값); 했을 때 없으면 set.end()를 
- #include <'map'>은 set과 다르게 pair형태, map은 오름차순으로 정렬(키 중복 안됨), multimap은 오름차순으로 정렬(키 중복 가능)
    - map<int, string, greater<int>> m;   //내림차순
    - map.insert(make_pair(4, "d") );     //4라는 키로 d값 삽입
    - multimap<int,int> mm;하면 첫번째 int에 맞게 오름차순 정렬됨
    - multimap<int, int, greater<int>> mm;하면 첫번째 int 맞게 내림차순 됨
    
