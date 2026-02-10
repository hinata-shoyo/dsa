#include <bits/stdc++.h>

int linearSearch(int *arr, int size, int n) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == n) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[] = {3, 5, 21, 5, 6, 25};
  int size = sizeof(arr) / sizeof(arr[0]);
  std::cout << linearSearch(arr, size, 3) << std::endl;
  return 0;
}
