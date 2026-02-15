#include <bits/stdc++.h>

int findMin(std::vector<int> &nums) {
  int low = 0;
  int high = nums.size() - 1;
  while (low < high) {
    int mid = (high + low) / 2;
    if (nums[mid] > nums[high]) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  return nums[low];
}

int main() {
  std::vector<int> nums = {2, 3, 4, 5, 1};
  std::cout << findMin(nums) << std::endl;
  return 0;
}
