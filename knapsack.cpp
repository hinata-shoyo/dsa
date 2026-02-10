#include <bits/stdc++.h>
using namespace std;



int main(){
  int w;
  int arr[2][5];
  cout<<"enter the max allowed weight: ";
  cin>>w;

  cout<<"enter the weights and profit for each column: ";
  for(int i=0; i<5; i++){
    cin>>arr[0][i];
    cin>>arr[1][i];
  }

  return 0;
}
