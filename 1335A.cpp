#include <bits/stdc++.h>
using namespace std;
int main() {
	long n;
	cin>>n;
	long long t;
	while(n--) {
		cin>>t;
		if(t & 1) // Odd
			cout<<t/2<<"\n";
		else
			cout<<t/2 -1<<"\n";
	}
	return 0;
}
