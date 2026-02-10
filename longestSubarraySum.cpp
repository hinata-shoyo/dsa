#include<bits/stdc++.h>

// int longestSubarray(std::vector<int> nums, int k){
//   int longest = 0;
//   for(int i=0; i<nums.size(); i++){
//     int sum = 0;
//     int count = 0;
//     for(int j=i; j<nums.size(); j++){
//       sum =  sum + nums[j];
//       count++;
//       if(sum ==  k){
//          longest = std::max(longest,count);
//          count = 0;
//          break;
//       }
//     }
//   }
//   return longest;
// }


// optimized O(n)


int longestSubarray(std::vector<int> nums, int k){
  int longest = 0;
  int left = 0, right = 0;
  int size = nums.size();
  int sum = nums[0];

  while(right<size){
    while(sum>k && left<=right){
      sum -= nums[left];
      left++;
    }
    if(sum == k) longest = std::max(longest, right-left+1);
    right++;
    if(right < size) sum += nums[right];
  }
  return longest;

}

int main(){
  std::vector<int> nums = {6, -2, 2, -8, 1, 7, 4, -10};
  std::cout<<longestSubarray(nums, 0)<<std::endl;

  return 0;
}
