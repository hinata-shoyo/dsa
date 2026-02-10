#include<bits/stdc++.h>
#include <unordered_set>

int longestConsecutive(std::vector<int>& nums){
  std::unordered_set<int> store(nums.begin(), nums.end());
  int sequence = 0;
  for(int num:store){
    if(store.find(num-1) == store.end()){
      int count = 1;
      int x = num;
      while(store.find(x+1)!=store.end()){
        count++;
        x++;
      }
      sequence = std::max(sequence, count);
    }
  }
  return sequence;
}

int main(){
  std::vector<int> nums = {100,4,200,1,3,2};
  std::cout<<longestConsecutive(nums)<<std::endl;
  return 0;
}
