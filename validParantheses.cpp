#include <bits/stdc++.h>

bool isValid(std::string s) {
  std::map<char,char> pairs = {{'(', ')'}, {'{', '}'}, {'[',']'}};
  std::cout<<pairs[')'];
  std::stack<char> store;
  for (char c : s) {
    if (store.size() == 0)
      store.push(c);
    else if (c == pairs[store.top()]) {
      store.pop();
    } else {
      store.push(c);
    }
  }
  return store.empty() ? true : false;
}

int main() {
  std::cout << isValid("()") << std::endl;
  return 0;
}
