#include <bits/stdc++.h>
using namespace std;
int main() {
	char c,s,a,b;
	bool has = false;
	cin>>c>>s;
	for(int i=0;i<5;i++) {
		cin>>a>>b;
		if(a == c || s == b)
			has = true;
	}	
	cout<<(has ? "YES" : "NO");
	return 0;
}
