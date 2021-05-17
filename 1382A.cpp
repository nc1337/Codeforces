#include <iostream>

using namespace std;
const int N = 1001;
bool vis[N];
int a[N], b;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < n; i++) {
      cin>>a[i];
      vis[a[i]] = true;
    }
    int last_common = -1;
    for(int i = 0; i < m; i++) {
      cin>>b;
      if (vis[b]) last_common = b;
    }

    for(int i = 0; i < n;i++) {
      vis[a[i]] = false;
    }

    if(last_common == -1)
      cout<<"NO\n";
    else
      cout<<"YES\n1 "<<last_common<<"\n";
  }
  return 0;
}


