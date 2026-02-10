#include <bits/stdc++.h>

// leetcode
int reversePairs(std::vector<int>& nums){
  int count;
  int start = 0; 
  int right = nums.size()-1;
  return count;
}

int merge(std::vector<int>& nums, int left, int mid, int right){
  int count=0;
  int l = left;
  int r = mid+1;
  std::vector<int> temp;
  while(l<=mid && r<=right){
    if(nums[l]>nums[r]){
      temp.push_back(nums[r]);
      count += mid-l+1;
      r++; 
    }else{
      temp.push_back(nums[l]);
      l++;
    }
  }
  while(l<=mid){
    temp.push_back(nums[l]);
    l++;
  }
  while(r<=right){
    temp.push_back(nums[r]);
    r++;
  }
  for(int i=left; i<=right; i++){
    nums[i] = temp[i-left];
  }
  return count;
}

int countPairs(std::vector<int>& nums, int left, int mid, int right){
  int count = 0;
  int r = mid+1;
  for(int i=left; i<=right; i++){
    while(r<=right && nums[i]>2*nums[r])
      count += r-(mid+1);
  }
  return count;
}

int mergeSort(std::vector<int>& nums, int left, int right){
  int count=0;
  if(left>=right) return count;
  int mid = (right+left)/2;
  count += mergeSort(nums, left, mid);
  count += mergeSort(nums, mid+1,right);
  count += countPairs(nums, left, mid, right);
  count += merge(nums, left, mid, right);
  return count;
}

int countInversions(std::vector<int>& nums){
  return mergeSort(nums, 0, nums.size()-1);
}


int main() {
  return 0;
}
