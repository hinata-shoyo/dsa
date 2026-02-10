#include<bits/stdc++.h>

// 0 red
// 1 white
// 2 blue
// dutch's national flag algo
void sortColors(std::vector<int>& nums) {
  int low = 0, mid = 0;
  int high = nums.size() -1 ;
  while(mid<high){
    if(nums[mid] == 0 ){
      std::swap(nums[low], nums[mid]);
      low++;
      mid++;
    }
    else if(nums[mid] == 1) mid++;
    else if(nums[mid] == 2){
      std::swap(nums[mid], nums[high]);
      high--;
    }
  }
        
}

int main(){
  std::vector<int> nums = {2,0,2,1,1,0};
  sortColors(nums);
  std::copy(nums.begin(), nums.end(), std::ostream_iterator<int>(std::cout, " "));
  return 0;
}
