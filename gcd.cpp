#include <iostream>
#include <string>

using namespace std;

int GCD(int n1, int n2) {
  for (int i = min(n1, n2); i > 0; i--) {
    if (n1 % i == 0 && n2 % i == 0) {
      return i;
    }
  }
  return 1;
}

int canBeTypedWords(string text, string brokenLetters) {
  int count = 0;
  bool occured = false;
  for (int i = 0; i <= text.length(); i++) {
    if (text[i] == 'i')
      occured = true;
    // if((text[i]==' ' || text[i]=='\n') && occured!=false){
    //   occured = false;
    // }
    if ((text[i] == ' ' || text[i] == '\n') && occured == false) {
      count++;
      // cout<<text[i-1];
    }
    occured = false;
  }
  return count;
}

int main() {
  cout << canBeTypedWords("hi hellok asdfi a", "i");
  return 0;
}
