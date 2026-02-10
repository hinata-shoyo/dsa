#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
  unordered_map<char, int> romans = {{'I', 1},   {'V', 5},   {'X', 10},
                                     {'L', 50},  {'C', 100}, {'D', 500},
                                     {'M', 1000}};
  int arabic = 0;
  for (int i = 0; i < s.length(); i++) {
    if (romans[s[i]] < romans[s[i + 1]]) {
      arabic -= romans[s[i]];
    } else {
      arabic += romans[s[i]];
    }
  }
  return arabic;
}

int main() {
  cout << romanToInt("XIV") << endl;
  return 0;
}
