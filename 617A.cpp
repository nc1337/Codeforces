
#include <bits/stdc++.h>
using namespace std;
int main() {
	int x;
	int cnt = 0;
	cin>>x;
	while(x != 0) {
		cnt += x / 5;
		x %= 5;
		cnt += x / 4;
		x %= 4;
		cnt += x / 3;
		x %= 3;
		cnt += x / 2;
		x %= 2;
		cnt += x;
		x = 0;
	}
	cout<<cnt;
	return 0;
}
