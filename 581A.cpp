#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int m = min(a,b);
	int c = max(a,b);
	cout<<m<<" "<<(c-m)/2;
	return 0;
}
