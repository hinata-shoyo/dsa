#include <bits/stdc++.h>

void bubbleSort(int *arr, int size) {
  for (int i = size - 1; i > 0; i--) {
    bool didswap = 0;
    for (int j = 0; j < i; j++) {
      if (arr[j + 1] < arr[j]) {
        std::swap(arr[j], arr[j + 1]);
        didswap = 1;
      }
    }
    if (!didswap) {
      break;
    }
  }
}

int main() {
  int arr[] = {34, 235, 31, 4, 25, 31};
  int size = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, size);
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
