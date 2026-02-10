#include <bits/stdc++.h>

void moveZeros(int *arr, int size) {
  int *temp = arr;
  int position = 0;
  for (int i = 0; i < size; i++) {
    if (temp[i] != 0) {
      arr[position] = temp[i];
      position++;
    }
  }
  while (position < size) {
    arr[position] = 0;
    position++;
  }
}

int main() {
  int arr[] = {1, 2, 3, 0, 1, 0, 34, 523, 0, 30, 0, 0, 0, 32};
  int size = sizeof(arr) / sizeof(arr[0]);
  moveZeros(arr, size);
  for (int nums : arr) {
    std::cout << nums << " ";
  }
  std::cout << std::endl;
  return 0;
}
