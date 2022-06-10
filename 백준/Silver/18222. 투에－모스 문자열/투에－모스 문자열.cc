#include <iostream>
using namespace std;

long long f(long long x){
    if(x==1)return 0;
	long long i=1;
	for(;i+i<x;i+=i);
	return !f(x-i);
}

int main() {
	long long n;
	cin>>n;
	
	cout<<f(n);
	return 0;
}