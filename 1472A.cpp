#include <iostream>

using namespace std;

int main() {
  int n;
  cin>>n;
  while(n--) {
    int w, h, num, wcut = 0, hcut= 0, term = 1;
    cin>>w>>h>>num;
    while(w % 2 == 0) {
      wcut += term;
      term *= 2;
      w /= 2;
    }
    term = 1;
    while(h % 2 == 0) {
      hcut += term;
      term *= 2;
      h /= 2;
    }
    if(((wcut + 1) * (hcut + 1)) >= num) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}
