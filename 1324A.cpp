#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		bool flag = true;
		int n;
		cin>>n;
		vector<int> a(n,0);
		for(int i=0;i<n;i++) 
			cin>>a[i];
		int min = *min_element(a.begin(), a.end());
		//cout<<"Min: "<<min<<endl;
		for(int i=0;i< n;i++) { 
			if((a[i] - min) % 2 != 0) {
				flag = false;
				//cout<<"HERE"<<endl;
				break;
			}
		}
		cout<<(flag ? "YES" : "NO")<<endl;
	}
		
	return 0;
}
