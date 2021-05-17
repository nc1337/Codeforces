#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int sticks, diamonds;
    cin>>sticks>>diamonds;
    if (sticks == 0 || diamonds == 0)
      cout<<"0\n";
    else {
      cout<<(sticks + diamonds) / 3<<"\n";
    }
  } 
  return 0;
}
