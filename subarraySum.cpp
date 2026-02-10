#include<bits/stdc++.h> 

int subarraySum(std::vector<int>& nums, int k){
  int count=0;
  int prefixSum=0;
  std::unordered_map<int,int> prefixSumStore;
  prefixSumStore[0]=1;
  for(int i=0; i<nums.size(); i++){
    prefixSum += nums[i];
    if(prefixSumStore.find(prefixSum-k) != prefixSumStore.end()){
      count += prefixSumStore[prefixSum-k];
    }
    prefixSumStore[prefixSum]++;
  }
  return count;
}

int main(){
  std::vector<int> nums = {1,2,3};
  std::cout<<subarraySum(nums,3)<<std::endl;
  return 0;
}
