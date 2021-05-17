#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,k;
	cin>>a>>k;
	for(int i=0; i<k; i++) {
		if(a % 10 == 0)
			a /= 10;
		else
			a--;
	}
	cout<<a;
	return 0;
}
