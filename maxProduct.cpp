#include <bits/stdc++.h>

int maxProduct(std::vector<int> &nums) {
  int size = nums.size();
  int maxProduct = INT_MIN;
  int prefixProduct = 1, suffixProduct = 1;
  for (int i = 0; i < size; i++) {
    prefixProduct *= nums[i];
    suffixProduct *= nums[size - i - 1];
    if (prefixProduct == 0)
      prefixProduct = 1;
    if (suffixProduct == 0)
      suffixProduct = 1;
    maxProduct = std::max(maxProduct, std::max(prefixProduct, suffixProduct));
  }
  return maxProduct;
}

int main() {
  std::vector<int> nums = {0, 1};
  std::cout << maxProduct(nums) << std::endl;
  return 0;
}
