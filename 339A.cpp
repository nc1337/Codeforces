#include <iostream>

using namespace std;

int main() {
  string s;
  int ones = 0, twos = 0, threes = 0;
  cin>>s;
  for(int i=0;i<s.length();i+=2) {
    if(s[i] == '1')
      ones += 1;
    else if(s[i] == '2')
      twos += 1;
    else
      threes += 1;
  }

  for(int i=0;i<ones;i++) {
    if (twos == 0 && threes == 0 && i == ones -1) 
      cout<<"1";
    else 
      cout<<"1+";
  }
  for(int i=0;i<twos;i++) {
    if (threes == 0 && i == twos -1) 
      cout<<"2";
    else
      cout<<"2+";
  }
  for(int i=0;i<threes;i++) {
    if (i == threes - 1)
      cout<<"3";
    else 
      cout<<"3+";
  }
  return 0;
}
