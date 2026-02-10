#include <bits/stdc++.h>

int partition(int *arr, int left, int right) {
  int pivot = arr[right];
  int i = left - 1;
  for (int j = left; j <= right; j++) {
    if (arr[j] < pivot) {
      i++;
      std::swap(arr[i], arr[j]);
    }
  }
  std::swap(arr[i + 1], arr[right]);
  return i + 1;
}

void quickSort(int *arr, int left, int right) {
  if (left < right) {
    int pivotIndex = partition(arr, left, right);
    quickSort(arr, left, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, right);
  }
}

int main() {
  int arr[] = {34, 235, 1, 31, 4, 25, 31};
  int size = sizeof(arr) / sizeof(arr[0]);
  quickSort(arr, 0, size - 1);
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
