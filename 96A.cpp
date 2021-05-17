#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	bool danger=false;
	cin>>s;
	int zs=0,os=0; 
	for(int i=0;i<s.length();i++) {
		if(s[i] == '0') {
			zs+=1;
			os=0;
		} else {
			os+=1;
			zs=0;
		}
		if(os==7||zs==7) 
			danger = true;
	}
	
	cout<<(danger ? "YES" : "NO");
	return 0;
}
