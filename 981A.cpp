#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s;
  cin>>s;
  string revs = s;
  reverse(revs.begin(),revs.end());
  if (s.compare(revs) != 0) { // Check if its not a palindrome
    cout<<s.length()<<endl;
    return 0;
  }

  // Here it a palindrome for sure
  vector<int> a(26,0);
  for(int i=0;i<s.length();i++) {

    a[s[i]-'a'] += 1;
  }

  for(int i=0;i<26;i++) {
    if (a[i] == s.length()) {
      cout<<0<<endl;
      return 0;
    }
  }

  for(int i=s.length();i>=2;i--) {
    string sub_str = s.substr(0,i);
    string revs_substr = sub_str;
    reverse(revs_substr.begin(), revs_substr.end());
    if (sub_str.compare(revs_substr) != 0) { // Check if its not a palindrome
      cout<<i<<endl;
      return 0;
    }
  }
  return 0;
}
