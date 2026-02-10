#include<bits/stdc++.h>

// std::vector<std::vector<int>> generate(int numRows){
//   std::vector<std::vector<int>> triangle;
//   std::vector<int> oldRow = {1,1};
//   std::vector<int> newRow;
//   triangle.push_back({1});
//   if(numRows==1) return triangle;
//   triangle.push_back({1,1});
//   if(numRows==2) return triangle;
//   for(int i=2; i<numRows; i++){
//     int prev = 1;
//     newRow.push_back(1);
//     for(int j=1; j<oldRow.size(); j++){
//       newRow.push_back(oldRow[j]+prev);
//       prev = oldRow[j];
//     }
//     newRow.push_back(1);
//     triangle.push_back(newRow);
//     oldRow = newRow;
//     newRow.clear();
//   }
//   return triangle;
// }

std::vector<int> generateRows(int rowNum){
  std::vector<int> row = {1};
  long long int colValue = 1;
  for(int col=1; col<rowNum; col++){
    colValue = colValue * (rowNum-col);
    colValue = colValue/col; 
    row.push_back(colValue);
  }
  return row;
}

 std::vector<std::vector<int>> generate(int numRows){
  std::vector<std::vector<int>> triangle;
  for(int i=1; i<=numRows; i++){
    triangle.push_back(generateRows(i));
  }
  return triangle;
}


int main(){
 std::vector<std::vector<int>> pascals = generate(5); 
  for(int i=0; i<pascals.size(); i++){
    for(int j=0; j<pascals[i].size();j++){
      std::cout<<pascals[i][j]<<" ";
    }
    std::cout<<std::endl;
  }
  

  return 0;
}
