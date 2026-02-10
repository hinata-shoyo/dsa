#include <bits/stdc++.h>

std::vector<int> arrayUnion(int *arr1, int *arr2, int n, int m) {
  std::vector<int> unionArray;
  int i = 0, j = 0;
  while(i < n && j < m){
    if(arr1[i]<arr2[j]){
      if(unionArray.empty() || unionArray.back() != arr1[i]){
        unionArray.push_back(arr1[i]);
      }
        i++;
    }
    else if(arr1[i]>arr2[j]){
      if(unionArray.empty() || unionArray.back() != arr2[j]){
        unionArray.push_back(arr2[j]);
      }
        j++;
    }
    else{
      if(unionArray.empty() || unionArray.back() != arr1[i]){
        unionArray.push_back(arr1[i]);
      }
        i++; j++;
    }
  }
  while(i<n){
    if(unionArray.empty() || unionArray.back() != arr1[i]){
      unionArray.push_back(arr1[i]);
    }
      i++;
  }
  while(j<m){
    if(unionArray.empty() || unionArray.back() != arr2[j]){
      unionArray.push_back(arr2[j]);
    }
      j++;
  }
  return unionArray;
}

int main() {
  int arr1[] = {};
  int arr2[] = {};
  int n = sizeof(arr1) / sizeof(arr1[0]);
  int m = sizeof(arr2) / sizeof(arr2[0]);
  auto unionArray = arrayUnion(arr1, arr2, n, m);
  for(int i=0; i<unionArray.size(); i++){
    std::cout<<unionArray[i]<<std::endl;
  }

  return 0;
}
