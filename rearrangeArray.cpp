#include<bits/stdc++.h>

std::vector<int> rearrangeArray(std::vector<int>& nums) {
  int size = nums.size();
  std::vector<int> positive;
  std::vector<int> negative;
  for(int i=0; i<size; i++){
    if(nums[i]>0) positive.push_back(nums[i]);
    else negative.push_back(nums[i]);
  }
  for(int i=0; i<size/2; i++){
    nums[2*i] = positive[i];
    nums[2*i+1] = negative[i];
  }
  return nums;   
}

int main(){
  std::vector<int> nums = {3,1,-2,-5,2,-4};
  rearrangeArray(nums);
  std::copy(nums.begin(), nums.end(), std::ostream_iterator<int>(std::cout, " "));
  return 0;
}
