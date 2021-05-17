#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	cin>>t;
	while(t--) {
		cin>>n;
		if(n % 4 == 0) {
			puts("YES");
			for(int i = 0;i < n/2 ;i++) {
				cout<<2*(i+1)<<" ";
			}
			for(int i = 0;i < (n/2) - 1;i++) {
				cout<<(2*i + 1)<< " ";
			}
			cout<<3*(n/2)-1<<"\n";
			
		} else {
			puts("NO");
		}
	}
	return 0;
}
