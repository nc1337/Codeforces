#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,k,y;
	int total = 0;
	cin>>n>>k;
	for(int i=0;i<n;i++) {
		cin>>y;
		if(y+k <= 5)
			total += 1;
	}
	if(total < 3){
		puts("0");
	} else {
		cout<<total/3;
	}
	return 0;
}
