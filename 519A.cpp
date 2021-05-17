#include <bits/stdc++.h>
#include <unordered_map>
#include <cctype>
using namespace std;

int main() {
  unordered_map<char, int> umap;
  int wcount = 0, bcount = 0;
  umap['q'] = 9;
  umap['r'] = 5;
  umap['b'] = 3;
  umap['n'] = 3;
  umap['p'] = 1;
  umap['k'] = 0;
  for(int i=0;i<8;i++) {
    string s;
    cin>>s;
    for(int j=0;j<s.length();j++){
      if (s[j] != '.') {
        if (isupper(s[j])) {
          wcount += umap[s[j] + 32];
        } else {
          bcount += umap[s[j]];
        }
      }
    }
  }
  if (wcount > bcount ) {
    cout<<"White";
  } else if (wcount < bcount) {
    cout<<"Black";
  } else {
    cout<<"Draw";
  }
  return 0;
}
