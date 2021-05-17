#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a;
	int osum=0, esum=0;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a;
		if(abs(a) & 1)
			osum+=1;
		else
			esum+=1;
	}
	cout<<min(osum,esum);
	return 0;
}
