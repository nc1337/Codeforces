#include <iostream>

using namespace std;

int noOfCells(int n, int i) {
  if (n == 1) {
    return 1;
  }
  return noOfCells(n-1, i+1) + 4*i;
}

int main() {
  int n;
  cin>>n;
  cout<<noOfCells(n, 1);
  return 0;
}
