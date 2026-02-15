#include <bits/stdc++.h>

int findPeakElement(std::vector<int> &nums) {
  int size = nums.size() - 1;
  if(size==0) return 0;
  if (nums[0] > nums[1])
    return 0;
  if (nums[size] > nums[size-1])
    return size;
  int low = 1;
  int high = size-1;
  while(low<=high){
    int mid = (high+low)/2;
    if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
    if(nums[mid]<nums[mid+1] && nums[mid+1]>nums[mid-1]) low = mid+1;
    if(nums[mid]<nums[mid-1] && nums[mid-1]>nums[mid+1]) high = mid-1;
    if(nums[mid-1]==nums[mid+1]) low = mid+1;
  }
  return -1;
}

int main() {
  std::vector<int> nums = {1, 2, 3, 1};
  std::cout << findPeakElement(nums) << std::endl;
  return 0;
}
