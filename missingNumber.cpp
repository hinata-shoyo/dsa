#include<bits/stdc++.h>

int findMissing(int* arr, int n){
  for(int i=0; i<n; i++){
    if(arr[i]!=i+1){
      return i+1;
    }
    // std::cout<<arr[i];
  }
return -1;
}


int main(){
  int arr[] = {1,2,3,5};
  int n = 5;
  // std::cout<<findMissing(arr, n)<< std::endl;
  std::cout<<(4^5)<< std::endl;
  return 0;
}
