#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,h,t,cnt = 0;
	cin>>n>>h;
	for(int i=0; i<n; i++) {
		cin>>t;
		if (t > h) cnt+=2;
		else cnt++;
	}
	cout<<cnt;

	return 0;
}
