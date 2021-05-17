#include <bits/stdc++.h>
using namespace std;
int main(){
	int crimes = 0;
	int hired = 0;
	int n,t;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>t;
		if(t < 0 ) {
			if (hired == 0) {
				crimes += 1;
			} else {
				hired--;
			}
		}
		else
			hired += t;
	}
	cout<<crimes;
	return 0;
}
