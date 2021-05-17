#include <bits/stdc++.h>
#include <map>

using namespace std;

int main() {
  int t, index=0;
  cin>>t;
  int n = t;
  string map[t][2];
  while(t--) {
    string old_s, new_s;
    cin>>old_s>>new_s;
    bool found = false;
    for(int i=0; i<n;i++) {
      if (map[i][1] == old_s) {
        map[i][1] = new_s;
        found = true;
        n--;
        break;
      }
    }

    if (!found) {
      map[index][0] = old_s;
      map[index][1] = new_s;
      index++;

    }
  }
  cout<<n<<endl;
  for(int i=0; i<n;i++) {
    cout<<map[i][0]<<" "<<map[i][1]<<endl;
  }
}
