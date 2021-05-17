#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int s;
		cin>>s;
		long count = 0;
		while(s >= 10) {
			count += (s/10)*10;
			s =s % 10 + (s/10);
		}
		cout<<count+s<<endl;
	}
	return 0;
	
}
