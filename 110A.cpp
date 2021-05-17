#include <bits/stdc++.h>
using namespace std;

bool luckyNumber(int x){
	if(x == 0) return false;
	while(x != 0) {
		if( x % 10 == 4 || x % 10 ==7)
			x /= 10;
		 else
			return false;
	}
	return true;
}
int main() {
	long long n;
	int cnt = 0;
	cin>>n;
	while(n != 0) {
		if( n % 10 == 4 || n % 10 == 7) 
			cnt++;
		n /= 10;
	}
	if(luckyNumber(cnt))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
