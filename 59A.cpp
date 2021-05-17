#include <bits/stdc++.h>
using namespace std;
int main() {
	int lcnt = 0;
	string s;
	cin>>s;
	for(int i=0; i< s.length();i++) {
		if (s[i] >= 97 && s[i] <= 122) 
			lcnt++;
	}
	if(lcnt >= (s.length() - lcnt)) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	} else {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	cout<<s;
	return 0;
}
