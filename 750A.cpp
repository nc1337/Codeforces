#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	cin>>n>>k;
	int left = 240 - k;
	int sum = 5*(n*(n+1)/2);
	while(sum > left) {
		sum -= 5*n;
		n--;
	}
	cout<<n;
	return 0;
}
