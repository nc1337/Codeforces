#include <iostream>

using namespace std;

int main() {
  int n,capacity;
  cin>>n>>capacity;
  int lastCityFilled = n - capacity;
  if (lastCityFilled <= 1) {
    lastCityFilled = 1;
  }
  int money = 0;
  if (capacity >= n - 1) {
    money = n - 1;
  } else {
    money = capacity;
  }
  for(int i = 2; i <= n; i++) {
    if (i <= lastCityFilled) {
      money += i;
    }
  }
  cout<<money;
  return 0;
}
