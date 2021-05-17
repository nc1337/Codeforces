#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;
		int L = n*(a-b), R = n*(a+b);
		if(R < c-d ||c+d < L) 
			cout<<"NO";
		else
			cout<<"YES";
		cout<<"\n";
	}	
	return 0;
}
