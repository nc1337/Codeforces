#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,a,b,winner = 0 ;
	cin>>n;
	while(n--) {
		cin>>a>>b;
		if(a > b) {
			winner += 1;
		} else if (a < b) {
			winner -= 1;
		}
	}
	if(winner > 0) {
		puts("Mishka");
	} else if (winner < 0) {
		puts("Chris");
	} else {
		puts("Friendship is magic!^^");
	}
	return 0;
}
