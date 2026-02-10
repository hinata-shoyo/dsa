#include<bits/stdc++.h>

void setZeroes(std::vector<std::vector<int>>& matrix){
  std::unordered_set<int> rows;
  std::unordered_set<int> cols;
  for(int i=0; i<matrix.size(); i++){
    for(int j=0; j<matrix[0].size();j++){
      if(matrix[i][j] == 0){
        rows.insert(i);
        cols.insert(j);
      }
    }
  }
  for(int n:rows){
    for(int i=0; i<matrix[0].size();i++){
      matrix[n][i] = 0;
    }
  }
  for(int n:cols){
    for(int i=0; i<matrix.size();i++){
      matrix[i][n] = 0;
    }
  }
}

int main(){
  std::vector<std::vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
  // setZeroes()
  return 0;
}
