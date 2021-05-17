#include <iostream>

using namespace std;

int main() {
  string s;
  cin>>s;
  int m;
  cin>>m;

  while(m--) {
    int l, r;
    int count = 0;
    cin>>l>>r;
    for(int i = l - 1; i < r - 1; i++) {
      if (s[i] == s[i+1])
        count += 1;
    }
    cout<<count<<"\n";
  }
  return 0;
}
