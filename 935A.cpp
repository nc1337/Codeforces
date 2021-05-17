#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	float t;
	cin>>n;
	int total = 1;
	for(int i=2;i<=n/2;i++) {
		t = float(n-i)/float(i);
		if(t == int(t))
			total+=1;
	}
	cout<<total;
	return 0;
}
