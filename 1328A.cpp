#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	long a,b;
	while(n--) {
		cin>>a>>b;
		if(a % b == 0)
			cout<<0<<"\n";
		else
			cout<<((((a/b) + 1) * b) - a)<<"\n";
	}
	return 0;
}
