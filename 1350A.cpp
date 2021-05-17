#include <bits/stdc++.h>
using namespace std;

long leastDivisor(long n) {
	if(n % 2 == 0)
		return 2;

	for(long i=3;i<=n;i+=2) {
		if(n % i ==0)
			return i;
	}
	return n;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		long n,k;
		cin>>n>>k;
		if(n&1) 
			cout<<n + 2*(k-1) + leastDivisor(n);
		else
			cout<<n+2*k;
		puts("");
	}
	return 0;
}
