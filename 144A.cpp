#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,max=0,min=101;
	int maxi = -1, mini;
	cin>>n;
	int t[n];
	for(int i=0;i<n;i++) {
		cin>>t[i];
		if(t[i] > max) {
			maxi = i;
			max = t[i];
		}
		if (t[i] <= min) {
			mini = i;
			min = t[i];
		}
	}
	if (max == t[0]) 
		maxi = 0;
		
	cout<<maxi + (n - mini - ((maxi < mini) ? 1 : 2));
	return 0;
}
