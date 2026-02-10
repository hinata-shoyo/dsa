#include <bits/stdc++.h>

int binSearch(std::vector<int> &nums, int target, bool checkLeft) {
  int low = 0;
  int high = nums.size() - 1;
  int ans = -1;
  while (low <= high) {
    int mid = (high + low) / 2;
    if (target == nums[mid]) {
      ans = mid;
      if (checkLeft)
        high = mid - 1;
      else
        low = mid + 1;
    } else if (target < nums[mid]) {
      high = mid - 1;
    } else
      low = mid + 1;
  }
  return ans;
}

std::vector<int> searchRange(std::vector<int> &nums, int target) {
  return {binSearch(nums, target, true), binSearch(nums, target, false)};
}

int main() { return 0; }
