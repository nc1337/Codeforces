#include <bits/stdc++.h>
using namespace std;
int main() {
	string end ="it",hate="I hate ", love="I love ", conj="that ";
	string result = "";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		if(i%2 ==0) {
			result += (i==0 ? "" : conj) + hate;
		} else {
			result += conj + love;
		}
	}
	cout<<result+end;
	return 0;
}
	
