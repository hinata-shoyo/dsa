#include<bits/stdc++.h>

// int majorityElement(std::vector<int> nums){
//   std::unordered_map<int, int> store;
//   for(int num:nums)
//     store[num]++;
//   for(auto& pair:store){
//     if(pair.second > (nums.size()/2))
//       return pair.first;
//   }
//   return -1;
// }


// boyer moore majority count algo 
// int majorityElement(std::vector<int> nums){
//   int candidate;
//   int count = 0;
//   for(int num:nums){
//     if(count==0) candidate = num;
//     count += (num == candidate)? 1:-1;
//   }
//   return candidate;
// }



// n/3 variant
std::vector<int> majorityElement(std::vector<int> nums){
  int cnt1 = 0;
  int cnt2 = 0;
  std::vector<int> ans;
  int candidate1 = INT_MIN, candidate2=INT_MIN;
  for(int num:nums){
    if(cnt1==0 && candidate2!=num){cnt1=1;candidate1=num;}
    else if(cnt2==0 && candidate1!=num){cnt2=1;candidate2=num;}
    else if(candidate1==num) cnt1++;
    else if(candidate2==num) cnt2++;
    else{ cnt1--; cnt2--;}
  }
  cnt1=0;  
  cnt2=0; 
  for(int num:nums){
    if(num==candidate1) cnt1++;
    if(num==candidate2) cnt2++;
  }
  if(cnt1>nums.size()/3) ans.push_back(candidate1);
  if(cnt2>nums.size()/3) ans.push_back(candidate2);
  return ans;
}

int main(){
  std::vector<int> nums = {2,2,1,1,1,2,2};
  std::cout<<2/3;
  return 0;
}
