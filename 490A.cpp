#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	vector<int> first;
	vector<int> second;
	vector<int> third;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		if(a[i] == 1) 
			first.push_back(i+1);
		else if(a[i] == 2)
			second.push_back(i+1);
		else
			third.push_back(i+1);
	}
	int ar[] = {int(first.size()), int(second.size()), int(third.size())};
	int min = *min_element(ar, ar+3);
	if(min == 0) 
		cout<<min;
	else {
		cout<<min<<"\n";
		for(int i = 0;i<min;i++)
			cout<<first[i]<<" "<<second[i]<<" "<<third[i]<<"\n";
	}
	return 0;
}
