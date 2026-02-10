#include<bits/stdc++.h>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
  std::vector<std::vector<int>> ans;
  std::sort(nums.begin(), nums.end());
  for(int i=0; i<nums.size(); i++){
    if(i>0 && nums[i]==nums[i-1]) continue;
    int left=i+1;
    int right = nums.size()-1;
    while(left<right){
      long long int sum=(long long)nums[i]+nums[left]+nums[right];
      if(sum==0){
        ans.push_back({nums[i], nums[left], nums[right]});
        left++; right--;
        while(left<right && nums[left]==nums[left-1]) left++;
        while(left<right && nums[right]==nums[right+1]) right--;
      } 
      else if(sum>0) right--;
      else if(sum<0) left++;
    }
  }
  return ans;
}

int main(){
  std::vector<int> nums = {-1,0,1,2,-1,-4};
  std::vector<std::vector<int>> ans = threeSum(nums);
  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size();j++){
      std::cout<<ans[i][j]<<" ";
    }
      std::cout<<std::endl;
  }


  return 0;
}
