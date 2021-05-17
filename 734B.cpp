#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int f = min(a,min(c,d));
	a-=f;
	int k = min(a,b);
	cout<<256*f + k*32;
	return 0;
}
