#include<bits/stdc++.h>

// optimized 
int singleNumber(std::vector<int>& nums){
  int xorr = 0;
  for(int i=0; i<nums.size(); i++){
    xorr = xorr ^ nums[i];
  }
  return xorr;
}

// int singleNumber(std::vector<int>& nums){
//   std::vector<int> sorted = nums;
//   sort(sorted.begin(), sorted.end());
//   for(int i=0; i<nums.size()-1; i=i+2){
//     if(sorted[i]!=sorted[i+1])
//       return sorted[i];
//   }
//   return sorted[nums.size()-1];
// }


int main(){
  std::vector<int> nums = {4,1,2,1,2};
  std::cout<<singleNumber(nums)<<std::endl;
  return 0;
}
