#include<bits/stdc++.h>

std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix){
  std::vector<int> spiral;
  int leftBoundary = 0;
  int rightBoundary = matrix[0].size();
  int topBoundary = 0;
  int bottomBoundary = matrix.size();
  while(leftBoundary<rightBoundary && topBoundary<bottomBoundary){
    for(int i=leftBoundary; i<rightBoundary; i++){
      spiral.push_back(matrix[topBoundary][i]);
    }
    topBoundary++;
    for(int i=topBoundary; i<bottomBoundary; i++){
      spiral.push_back(matrix[i][rightBoundary-1]);
    }
    rightBoundary--;
    if(!(leftBoundary<rightBoundary)) break;
    for(int i=rightBoundary-1; i>=leftBoundary; i--){
      spiral.push_back(matrix[bottomBoundary-1][i]);
    }
    bottomBoundary--;
    for(int i=bottomBoundary-1; i>=topBoundary; i--){
      spiral.push_back(matrix[i][leftBoundary]);
    }
    leftBoundary++;
  }
  return spiral;
}

int main(){
  return 0;
}
