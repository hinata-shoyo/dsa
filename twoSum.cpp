#include <bits/stdc++.h>

std::vector<int> twoSum(std::vector<int> &nums, int target) {
  std::vector<int> indices;
  std::unordered_map<int, int> store;
  for (int i = 0; i < nums.size(); i++) {
    if (store.find(target - nums[i]) != store.end()) {
      indices.push_back(store[target - nums[i]]);
      indices.push_back(i);
    }
    store[nums[i]] = i;
  }
  return indices;
}

int main() {
  std::vector<int> nums = {2, 7, 11, 15};
  std::vector<int> result = twoSum(nums, 9);
  std::copy(result.begin(), result.end(),
            std::ostream_iterator<int>(std::cout, " "));
  return 0;
}
