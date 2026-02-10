#include <iostream>
using namespace std;

void pattern1(int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++)
      cout << "* ";
    cout << "\n";
  }
}

void pattern2(int n) {
  int i, j;
  for (i = 0; i < n; i++) {

    for (j = 0; j < i + 1; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
}

void pattern3(int n) {
  int i, j;
  for (i = 0; i < n; i++) {

    for (j = 0; j < i + 1; j++) {
      cout << j + 1 << " ";
    }
    cout << "\n";
  }
}

void pattern4(int n) {
  int i, j;
  for (i = 0; i < n; i++) {

    for (j = 0; j < i + 1; j++) {
      cout << i + 1 << " ";
    }
    cout << "\n";
  }
}

void pattern5(int n) {
  int i, j;
  for (i = 0; i < n; i++) {

    for (j = n - i; j > 0; j--) {
      cout << "* ";
    }
    cout << "\n";
  }
}

void pattern6(int n) {
  int i, j;
  for (i = 0; i < n; i++) {

    for (j = 0; j < n - i; j++) {
      cout << j + 1 << " ";
    }
    cout << "\n";
  }
}

void pattern7(int n) {
  int i, j, k;
  for (i = 0; i < n; i++) {

    for (j = 0; j < n - i; j++) {
      cout << " ";
    }
    for (k = 0; k < (2*i + 1); k++) {
      cout << "*";
    }
    cout << "\n";
  }
}

int main() {

  int n;
  cin >> n;
  pattern7(n);

  return 0;
}
