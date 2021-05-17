#include <bits/stdc++.h>
using namespace std;
int main() {
	long n,sum = 0;
	cin>>n;
	int ar[] = {1,5,10, 20, 100};
	while(n != 0) {
		for(int i = 4;i>=0;i--) {
			sum += (n/ar[i]);
			n = n % ar[i];
		}
	}
	cout<<sum;
		
	return 0;
}
