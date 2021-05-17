#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj(2001);
int maxDepth = 1;

void dfs(int i, int d) {
	maxDepth = max(d,maxDepth);
	for(int j: adj[i]) {
			dfs(j,d+1);
	}
}


int main() {
	int n;
	cin>>n;
	for(int i=0;i<2001;i++)
		adj[i].clear();
	int a;
	for(int i=1;i<=n;i++) {
		cin>>a;
		if (a==-1) continue;	
		adj[a].push_back(i);
	}
	
	for(int i=1;i<=n;i++) {
		dfs(i,1);
	}
	cout<<maxDepth;
}
