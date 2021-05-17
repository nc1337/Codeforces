#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int h,n,m;
		cin>>h>>n>>m;
		if( h <= 10*n) 
			cout<<"YES";
		else {
			while(m--) {
				h = floor(float(h/2)) + 10;
			}
			if( h <= 10*n) 
				cout<<"YES";
			else
				cout<<"NO";
		}
		cout<<"\n";
	}
	return 0;
}
