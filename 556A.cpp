#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,zs=0,os=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<s.length();i++) {
		if(s[i] == '0')
			zs+=1;
		else
			os+=1;
	}
	
	cout<<abs(zs-os);
	return 0;
}
