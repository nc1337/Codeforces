#include <iostream>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n, num;
    int cnt1 = 0, cnt2 = 0;
    cin>>n;
    for(int i=0;i<n;i++) {
      cin>>num;
      if (num == 1) cnt1 ++;
      else cnt2++;
    }
    if(cnt1 % 2 == 0 && cnt1 != 0) {
      printf("YES\n");
    }
    else if (cnt1 == 0 && n % 2 == 0) {
      printf("YES\n");
    }
    else printf("NO\n");
  }
}
