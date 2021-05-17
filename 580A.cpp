#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	long a[n];
	long maxSumTillNow = -1;
	int maxTerms = -1;
	int terms = 1;
	long sum = 0;
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	sum = a[0];
	//cout<<sum<<endl;
	for(int i=1;i<n;i++) {
		if(a[i] >= a[i-1]) {
			sum+=a[i];
			terms++;
			//cout<<"S: "<<sum<<" T: "<<terms<<endl;
		} else {
			if (sum > maxSumTillNow)
				maxSumTillNow = sum;
			if (terms > maxTerms)
				maxTerms = terms;
			sum = a[i];
			terms = 1;
		}
			
	}
	if (terms > maxTerms || maxTerms == -1) 
		cout<<terms;
	else
		cout<<maxTerms;
	return 0;
}
