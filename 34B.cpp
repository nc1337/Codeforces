#include <bits/stdc++.h>

using namespace std;
// comment
/* 
 * Working out
 */
int main() {
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	int sum = 0;
	for(int i=0;i<m;i++)
		sum+= a[i];
	cout<<abs(sum);
}
