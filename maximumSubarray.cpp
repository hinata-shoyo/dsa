#include<bits/stdc++.h>

// kadane's algorithm
int maxSubArray(std::vector<int> nums){
  int max=INT_MIN;
  int sum =0;
  for(int i =0; i<nums.size(); i++){
    sum = sum+nums[i];
    if(sum>max) max = sum;
    if(sum<0) sum = 0;
  }
  return max;
}

int main(){
  std::vector<int> nums = {-2,-3,-1,-5};
  std::cout<<maxSubArray(nums)<<std::endl;
  return 0;
}
