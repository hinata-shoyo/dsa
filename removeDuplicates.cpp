#include<bits/stdc++.h>


int removeDuplicates(std::vector<int>& nums) {
  std::map<int , int> store;
  for(int i=0; i<nums.size(); i++){
    store[nums[i]] = 1;
  }
  int i=0;
  for(auto& pair : store){
    nums[i] = pair.first;
    i++;
  }
  return store.size();
}


int main(){
  int i =1;
  std::cout<<++i<<std::endl;


  return 0;
}
