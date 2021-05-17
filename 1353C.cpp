#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		long long moves = 0;
		cin>>n;
		for(long long i=1;i<=n/2;i++) {
			moves += i*i*8;
		}
		cout<<moves<<endl;
	}
	return 0;
}
