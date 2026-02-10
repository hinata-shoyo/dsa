#include <bits/stdc++.h>

int searchInsert(std::vector<int> &nums, int target) {
  int lowerBound = 0;
  int upperBound = nums.size() - 1;
  int potential = 0;
  while (lowerBound <= upperBound) {
    int mid = (lowerBound + upperBound) / 2;
    if (nums[mid] == target)
      return mid;
    else if (nums[mid] > target) {
      upperBound = mid - 1;
      potential = mid;
    } else if (nums[mid] < target) {
      lowerBound = mid + 1;
      potential = mid + 1;
    }
    std::cout << mid << " ";
  }
  return potential;
}

int main() {
  std::vector<int> nums = {1, 3};
  std::cout << searchInsert(nums, 2) << std::endl;
  return 0;
}
