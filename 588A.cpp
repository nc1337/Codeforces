#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,sum=0;
	cin>>n;
	vector<int> a(n), p(n);
	for(int i=0;i<n;i++) {
		cin>>a[i]>>p[i];
	}
	
	for(int i=0;i<n;i++) {
		int weight = a[i];
		int j=i+1;
		while((j < n) ) {
			if (p[i] <= p[j]) {
				weight+=a[j];
				j++;
			} else 
				break;
			
		}
		sum += weight*p[i];
		i=j-1;
	}
	cout<<sum;
		
	return 0;
}
