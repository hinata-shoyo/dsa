#include<bits/stdc++.h>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n){
  int pos = m+n-1;
  while(n>=0 && m>=0){
    if(nums1[m-1]>nums2[n]){
      nums1[pos] = nums1[m-1];
    }else{
      nums1[pos] = nums2[n-1];
    }
      pos--;
  }
}

int main(){
  return 0;
}
