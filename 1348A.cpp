#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
	int t,n;
	long long s1,s2;
	cin>>t;
	while(t--) {
		s1=0;
		s2=0;
		cin>>n;
		s1=pow(2,n);
		for(int i=1;i<=n-1;i++) {
			if(i <= (n/2 - 1))
				s1+= pow(2,i);
			else
				s2+= pow(2,i);
		}
		cout<<(s1-s2)<<"\n";
	}		
	return 0;
}
