#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,cnt = 0;
	char c;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>c;
		if(c == 'A')
			cnt++;
	}
	if (2*cnt > n)
		cout<<"Anton";
	else if (2*cnt < n)
		cout<<"Danik";
	else
		cout<<"Friendship";
	return 0;
}
