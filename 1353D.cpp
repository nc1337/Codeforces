#include <bits/stdc++.h>
using namespace std;

int l=0,r=0;
void maxZeroSubarray(vector<int> a) {
	int maxLength=0,length=0;
	int index;
	for(int i=0;i<a.size();i++) {
		if(a[i] == 0) {
			length++;
			if(length > maxLength) {
				maxLength = length;
				index = i;
			}
		} else
			length=0;
			
	}
	
	//cout<<"index: "<<index<< "maxLength: "<<maxLength<<endl;
	l = index - maxLength + 1;
	r = index;
}


int main() {
	int t;
	cin>>t;
	while(t--) {
		l=0;
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			a[i] = 0;
		r = n-1;
		if((r-l+1) & 1) {
			a[(l+r)/2] = 1; // [0 0 0] l,r = 0,2
		} else {
			a[(l+r-1)/2] = 1;
		} 
		
		//for(int p: a)
			//cout<<p<<" ";
		//cout<<endl;
		
		int i = 2;
		while(i<=n) {
			//cout<<l<<r<<endl;
			maxZeroSubarray(a);
			//cout<<l<<r<<endl;
			if((r-l+1) & 1) {
				a[(l+r)/2] = i;
			} else {
				a[(l+r-1)/2] = i;
			} 
			i++;
			//for(int p: a)
			//cout<<p<<" ";
		//cout<<endl;
		}
		for(int p: a)
			cout<<p<<" ";
		cout<<endl;
	}
	return 0;
}
