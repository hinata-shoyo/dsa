#include<bits/stdc++.h>

void nextPermutation(std::vector<int>& nums){
  int breakingPoint = -1;
  int size = nums.size();
  for(int i=size-2; i>=0; i--){
    if(nums[i]<nums[i+1]){
      breakingPoint = i;
      break;
    }
  }
  if(breakingPoint==-1){
    std::sort(nums.begin(), nums.end());
    return;
  };
  std::sort(std::next(nums.begin(),breakingPoint+1),nums.end());
  for(int i=breakingPoint+1; i<size; i++){
    if(nums[breakingPoint] < nums[i]){
      std::swap(nums[breakingPoint], nums[i]);
      break;
    }
  }
}

// 1 2 3 
// 1 3 2 
// 2 1 3
// 2 3 1
// 3 1 2

int main(){
  std::vector<int> nums = {2,3,1};
  nextPermutation(nums);
  std::copy(nums.begin(), nums.end(), std::ostream_iterator<int>(std::cout, " "));
  return 0;
}
