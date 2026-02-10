#include<bits/stdc++.h>


int findMaxConsecutiveOnes(std::vector<int>& nums){
  int maxOnes = 0;
  int count = 0;
  for(int i=0; i<nums.size(); i++){
    if(nums[i]==1){
      count++;
    }
    else if(nums[i]==0 && i==0)
      continue;
    else if(nums[i]==0 && nums[i-1]==1){
      maxOnes = std::max(count, maxOnes);
      count = 0;
    }
  }
  maxOnes = std::max(count, maxOnes);
  return maxOnes;
}


int main(){
  std::vector<int> nums = {0,1,1,0,1,1,1};
  std::cout<<findMaxConsecutiveOnes(nums)<<std::endl;
  return 0;
}
