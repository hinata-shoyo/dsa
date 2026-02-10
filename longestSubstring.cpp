#include <algorithm>
#include <bits/stdc++.h>

int lengthOfLongestSubstring(std::string s) {
  int maxCount = 0;
  int count = 0;
  std::string prev = "";
  for (char c : s) {
    if (prev == "") {
      count++;
    } else if (prev.find(c) != std::string::npos) {
      maxCount = std::max(maxCount, count);
      count = 1;
      prev = "";
    } else {
      count++;
    }
    prev += c;
  }
  return std::max(maxCount, count);
}

int main() {
  std::cout << lengthOfLongestSubstring("dvdf") << std::endl;
  return 0;
}
