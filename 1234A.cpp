#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    long long a;
    unsigned long long sum = 0;
    for(int i = 0; i < n; i++) {
      cin>>a;
      sum += a;
    }
    cout << int(ceil(sum / double(n)))<<endl;
  }
  return 0;
}
