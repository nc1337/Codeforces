#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin>>n;
  int  neg_cnt = 0, zero_cnt = 0;
  int last_neg = 0;
  double sum = 0;
  int a;
  while(n--) {
    cin>>a;
    if (a > 0) {
      sum += a - 1;
    } else if (a < 0) {
      neg_cnt += 1;
      last_neg = a;
      sum += -1 + -1*a;
    } else {
      zero_cnt += 1;
    }
  }

  if (neg_cnt % 2 != 0) { // Case when there are odd negative number
    if (zero_cnt != 0){
      sum += 1;
      zero_cnt--;
    } else if( zero_cnt == 0) {
      sum += 2;
    }
  }

  if(zero_cnt != 0) {
    sum += zero_cnt;
  }

  printf("%.lf\n", sum);
  return 0;
}
