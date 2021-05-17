#include <iostream>

using namespace std;

int main() {
  int n, num;
  int length = 1;
  int maxLength = 1;
  int prev = 0;
  cin>>n;
  while(n--) {
    cin>>num;
    if (prev != 0 ) {
      /* cout<<"HERE"<<endl; */
      if (prev < num ) {
        length += 1;
      } else {
        length = 1;
      }
    }
    maxLength = max(maxLength, length);
    /* cout<<"LENGTH: "<<length<<endl; */
    /* cout<<"PREV: "<<prev<<" NUM: "<<num<<endl; */
    prev = num;
    /* cout<<"PREV: "<<prev<<" NUM: "<<num<<endl; */
  }
  cout<<maxLength<<"\n";
  return 0;
}
