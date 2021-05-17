#include <bits/stdc++.h>
using namespace std;
int main() {
	long n;
	cin>>n;
	if (n&1) {
		if (n < 18) 
			cout<<n-9<<" "<<9;
		else
			cout<<9<<" "<<n-9;
	}
	else {
		if (n < 16)
			cout<<n-8<<" "<<8;
		else
			cout<<8<<" "<<n-8;
	}
	return 0;
}
