#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

string longestCommonPrefix(vector<string> &strs) {
  if(strs.size() == 1){
    return strs[0];
  }
  auto it = min_element(strs.begin(), strs.end(),
                        [](string &s1, string &s2) {
                          return s1.length() < s2.length();
                        });
  int shortest = it->length();
  string prevPrefix = "";
  string prefix = "";
  for (int i = 0; i < shortest; i++) {
    prefix = strs[0].substr(0, 1);
    for (string s : strs) {
      if (s.substr(0, 1) != prefix) {
        return prevPrefix;
      }
    }
    prevPrefix = prefix;
  }
  return prefix;
}

int main() {
  vector<string> list = {"aasdfasd", "aasz", "aflower", "absdsdkfasdfc"};
  // cout << longestCommonPrefix(list) << endl;
  cout<<(int)(log10(1234)+1);
  return 0;
}
