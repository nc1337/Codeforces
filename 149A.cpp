#include <bits/stdc++.h>
using namespace std;
int main() {
	int k;
	bool found =false;
	cin>>k;
	vector<int> a(12);
	for(int i=0;i<12;i++)
		cin>>a[i];
	if (k == 0) 
		cout<<"0";
	else {
		sort(a.begin(), a.end(),greater<int>());
		int sum = 0;
		for(int i=0;i<12;i++) {
			sum+= a[i];
			if(sum >= k) {
				cout<<i+1;
				found = true;
				break;
			}
		}
		if(!found) 
			cout<<"-1";
	}
	return 0;
}
