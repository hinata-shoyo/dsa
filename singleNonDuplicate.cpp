#include <bits/stdc++.h>

int singleNonDuplicate(std::vector<int> &nums) {
  int low = 0;
  int high = nums.size() - 1;
  int mid = (high + low) / 2;
  if(high==0) return nums[high];
  while (low <= high) {
    mid = (high + low) / 2;
    if(mid==0 && nums[mid+1]!=nums[mid]) return nums[mid];
    if(mid==nums.size()-1 && nums[nums.size()-1]!=nums[nums.size()-2]) return nums[mid];
    if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
      return nums[mid];
    if (mid % 2 == 0) {
      if (nums[mid] == nums[mid - 1])
        high = mid;
      else
        low = mid + 1;
    } else {
      if (nums[mid] == nums[mid - 1]){
        low = mid + 1;
      }
      else
        high = mid;
    }
  }
  return nums[mid];
}

// 3, 3, 7, 7, 10, 11, 11

int main() {
  std::vector<int> nums = {3, 3, 7, 7, 10, 11, 11};
  std::cout << singleNonDuplicate(nums) << std::endl;
  return 0;
}
