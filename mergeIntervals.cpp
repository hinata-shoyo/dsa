#include<bits/stdc++.h>
//
// std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& interval){
//   std::sort(interval.begin(), interval.end());
//   std::vector<std::vector<int>> ans;
//   for(int i=0; i<interval.size(); i++){
//     if(i==interval.size()){
//       ans.push_back({interval[i][0], interval[i][1]});
//       break;
//     } 
//     if(interval[i][1]<=interval[i+1][1] && interval[i][1]>=interval[i+1][0]){
//       ans.push_back({interval[i][0],interval[i+1][1]});
//       i++;
//     }else if(interval[i+1][0]>= interval[i][0] && interval[i+1][0]<=interval[i][1] && interval[i+1][1]>= interval[i][0] && interval[i+1][1]<=interval[i][1]){
//       ans.push_back({interval[i][0], interval[i][1]});
//       i++;
//     }
//     else{
//         ans.push_back({interval[i][0], interval[i][1]});
//     }
//   }
//   return ans;
// }

//
// std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& interval){
//   std::sort(interval.begin(), interval.end());
//   std::vector<std::vector<int>> ans;
//   for(int i=0; i<interval.size(); i++){
//     if(i==0) ans.push_back({interval[i][0], interval[i][1]});
//     else{
//       std::vector<int> temp = ans.back();
//       if(interval[i][0] <= temp[1] && interval[i][1]>= temp[1]){
//         int first = temp[0];
//         ans.pop_back();
//         ans.push_back({first,interval[i][1]});
//        }else if(temp[0]>= interval[i][0] && temp[0]<=interval[i][1] && temp[1]>= interval[i][0] && temp[1]<=interval[i][1]){
//         ans.pop_back();
//         ans.push_back({interval[i][0], interval[i][1]});
//        }else if(temp[0]<= interval[i][0] && temp[0]>=interval[i][1] && temp[1]<= interval[i][0] && temp[1]>=interval[i][1]){
//         int first = temp[0];
//         int second = temp[1];
//         ans.pop_back();
//         ans.push_back({first, second});
//       }else{ ans.push_back({interval[i][0],interval[i][1]});
//       }
//     }
//   }
//   return ans;
// }

 // [[1,3],[2,6],[8,10],[15,18]]
std::vector<std::vector<int>> merge(std::vector<std::vector<int>>& interval){
  std::sort(interval.begin(), interval.end());
  std::vector<std::vector<int>> ans;
  for(auto interval:interval){
    if(ans.empty() || ans.back()[1]<interval[0]){
      ans.push_back(interval);
    }else{
      ans.back()[1] = std::max(ans.back()[1],interval[1]);
    }
  }
  return ans;
}



int main(){

  return 0;
}
