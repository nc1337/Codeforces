#include <bits/stdc++.h>
using namespace std;
int main() {
	string t = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char c;
	string s;
	cin>>c>>s;
	for(int i=0;i<s.length();i++) {
		for(int j=0;j<t.length();j++){
			if(s[i] == t[j]) {
				if( c=='R')
					cout<<t[j-1];
				else
					cout<<t[j+1];
			}
		}
	}
	return 0;
}
