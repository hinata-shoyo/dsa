#include <bits/stdc++.h>

// iterative
int search(std::vector<int> &nums, int target) {
  int lowerBound = 0;
  int upperBound = nums.size() - 1;
  while (lowerBound <= upperBound) {
    int mid = (lowerBound + upperBound) / 2;
    if (nums[mid] == target)
      return mid;
    else if (nums[mid] > target) {
      upperBound = mid - 1;
    } else if (nums[mid] < target)
      lowerBound = mid + 1;
  }
  return -1;
}

int main() {
  std::vector<int> nums = {1, 2, 4, 5, 6};
  std::cout << search(nums, 10) << std::endl;
  return 0;
}
