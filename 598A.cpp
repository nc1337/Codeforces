#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  double n;
  cin>>t;
  while(t--) {
    cin>>n;
    int power_cnt = floor(log(n)/log(2));
    long double neg_sum = pow(2,power_cnt + 1)-1;
    long double all_sum = (n*(n+1))/2;
    printf("%.Lf\n", all_sum -  neg_sum - neg_sum);
  }
  return 0;
}
