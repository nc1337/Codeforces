#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	long long n,a;
	cin>>t;
	while(t--) {
		cin>>n;
		for(int k=2;k<=30;k++) {
			a = pow(2,k) - 1;
			if( n % a == 0) {
				cout<< n/a<<"\n";
				break;
			}
		}
	}
	return 0;
}
