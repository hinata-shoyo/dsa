#include <bits/stdc++.h>

int maxProfit(std::vector<int> nums) {
  int minPrice = INT_MAX;
  int maxProfit = 0;
  for (int price : nums) {
    if (price < minPrice)
      minPrice = price;
    else
      maxProfit = std::max(maxProfit, price - minPrice);
  }
  return maxProfit;
}

int main() {
  std::vector<int> nums = {2, 1, 4};
  std::cout << maxProfit(nums) << std::endl;
  return 0;
}
