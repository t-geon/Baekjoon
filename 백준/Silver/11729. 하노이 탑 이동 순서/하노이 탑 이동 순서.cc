#include <iostream>
using namespace std;
void hanoi(int n, int start, int to, int bypass)
{
    if (n == 1)
        printf("%d %d\n", start, to);   //가장 작은거 옮기기
    else
    {
        hanoi(n - 1, start, bypass, to);    //가장 작은 1까지 내려간다. n이 짝수면 원래bypass로 홀수면 to로
        printf("%d %d\n", start, to);   //큰거를 작은거 없는쪽으로 옮기기
        hanoi(n - 1, bypass, to, start);    //작은거랑 큰거 합치기 위해 작은거 다시 접근
    }
}

int main() {
    int num;
    cin >> num;
    cout << (1 << num) - 1 << "\n";
    hanoi(num, 1, 3, 2);
}