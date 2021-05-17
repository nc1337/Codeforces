#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	double res = 0,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		res += (t/100);
	}
	printf("%.10lf",(res*100)/n);
	return 0;
}
