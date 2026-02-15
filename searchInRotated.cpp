#include <bits/stdc++.h>

// [1, 0, 1, 1, 1]

// duplicate allowed
bool search(std::vector<int> &nums, int target) {
  int low = 0;
  int high = nums.size() - 1;
  while (low <= high) {
    int mid = (high + low) / 2;
    while (nums[mid] == nums[low] && nums[mid] == nums[high] && low < high) {
      low++;
      mid++;
      high--;
    }
    if (nums[mid] == target) {
      return true;
    } else if (nums[low] <= nums[mid]) {
      if (nums[mid] > target && target >= nums[low]) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    } else {
      if (nums[high] >= target && target > nums[mid])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return false;
}

// duplicate not allowed
int search(std::vector<int> nums, int target) {
  int low = 0;
  int high = nums.size() - 1;
  while (low <= high) {
    int mid = (high + low) / 2;
    if (nums[mid] == target) {
      return mid;
    } else if (nums[low] < nums[mid]) {
      if (nums[mid] > target && target >= nums[low]) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    } else {
      if (nums[high] >= target && target > nums[mid])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return -1;
}

int main() { return 0; }
