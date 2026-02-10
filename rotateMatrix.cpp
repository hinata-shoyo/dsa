#include<bits/stdc++.h>

void rotate(std::vector<std::vector<int>>& matrix){
  int size = matrix.size();
  //find transpose of the matrix
  for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      if(i<j)
        std::swap(matrix[i][j],matrix[j][i]);
    }
  }
  //reverse each row
  for(int i=0; i<size;i++){
    for(int j=0; j<size/2; j++){
      std::swap(matrix[i][j],matrix[i][size-1-j]);
    }
  }
}

int main(){
  std::vector<std::vector<int>> matrix = {{{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}}} ;
  rotate(matrix);
  return 0;
}
