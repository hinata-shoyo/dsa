#include <bits/stdc++.h>

void merge(int *arr, int l, int m, int r) {
  std::vector<int> temp;
  int left = l, right = m + 1;

  while (left <= m && right <= r) {
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left++]);
    } else {
      temp.push_back(arr[right++]);
    }
  }
  while (left <= m)
    temp.push_back(arr[left++]);
  while (right <= r)
    temp.push_back(arr[right++]);
  for (int i = l; i <= r; i++) {
    arr[i] = temp[i - l];
  }
}

void mergeSort(int *arr, int l, int r) {
  if (r <= l) {
    return;
  }
  int mid = (l + r) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, r);
  merge(arr, l, mid, r);
}

int main() {
  int arr[] = {34, 235, 31, 4, 25, 31};
  int size = sizeof(arr) / sizeof(arr[0]);
  mergeSort(arr, 0, size - 1);
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
