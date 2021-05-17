#include <bits/stdc++.h>
using namespace std;
int main() {
	string n;
	cin>>n;
	if(n[0] == '-') {
		if( (n[n.length()-2] - '0') > (n[n.length()-1] -'0') )
			n.erase(n.length()-2,1);
		else
			n.erase(n.length()-1,1);
			
		if (n.length() == 2 && n[1] == '0')
			n.erase(0,1);
	} 
	cout<<n;
	return 0;
}
