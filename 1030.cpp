#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,t,f=0;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if (t==1)
			f = 1;
	}
	cout<<((f ==0) ? "EASY" : "HARD");
	return 0;
}
