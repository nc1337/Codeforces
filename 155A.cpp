#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,t,min,max,res=0;
	cin>>n;
	cin>>t;
	min = t;
	max = t;
	n--;
	while(n--) {
		cin>>t;
		if(t > max) {
			max = t;
			res++;
		}
		if (t < min) {
			min = t;
			res++;
		}
		
	}
	cout<<res;
	return 0;
}
