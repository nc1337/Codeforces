#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[4];
	string res;
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	int max = *max_element(a, a + 4);
	for(int i=0;i<4;i++){
		if(a[i] < max)
			res += to_string(max-a[i])+" ";
			
	}
	res.pop_back();
	cout<<res;
	return 0;
}
