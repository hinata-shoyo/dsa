#include <bits/stdc++.h>

void reverseArray(int *arr, int start, int end) {
  while (start < end) {
    std::swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void LeftRotate(int *arr, int size, int position) {
  position = position % size;
  reverseArray(arr, 0, size - 1);
  reverseArray(arr, size - position, size - 1);
  reverseArray(arr, 0, size - position - 1);
}

void RightRotate(int *arr, int size, int position) {
  position = position % size;
  reverseArray(arr, 0, size - 1);
  reverseArray(arr, 0, position - 1);
  reverseArray(arr, position, size - 1);
}

int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr1) / sizeof(arr1[0]);
  LeftRotate(arr1, size, 1);
  for (int num : arr1) {
    std::cout << num << " ";
  }
  std::cout << std::endl;
  RightRotate(arr2, size, 1);
  for (int num : arr2) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}


// leetcode

// bool check(std::vector<int>& nums){
//   int position = 0;
//   std::vector<int> sorted = nums;
//   std::sort(sorted.begin(), sorted.end());
//   if(nums==sorted) return 1;
//   for(int i=0; i<nums.size()-1; i++){
//     if(sorted[i]==sorted[i+1]){
//       continue;
//     }
//     if(nums[0] == sorted[i]){
//       position = i;
//       break;
//     }
//   }
//   if(position==0) position = nums.size()-1;
//   for(int i=0; i<nums.size(); i++){
//     if(nums[i]!=sorted[((i+position)%nums.size())]){
//       return 0;
//     }
//   }
// return 1;
// }


// void rotate(std::vector<int>& sorted){
//   int temp = sorted[0];
//   for(int i=0; i<sorted.size()-1; i++){
//     sorted[i] = sorted[i+1];
//   }
//   sorted[sorted.size()-1] = temp;
//
// }
//
// bool check(std::vector<int>& nums){
//   std::vector<int> sorted = nums;
//   std::sort(sorted.begin(), sorted.end());
//   if(nums==sorted) return 1;
//   for(int i=1; i<nums.size(); i++){
//     rotate(sorted);
//     if(sorted==nums)
//       return 1;
//   }
//       return 0;
// }
