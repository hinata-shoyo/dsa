#include <bits/stdc++.h>

std::vector<std::vector<int>> fourSum(std::vector<int> &nums, int target) {
  std::vector<std::vector<int>> ans;
  if (nums.size() < 4)
    return ans;
  std::sort(nums.begin(), nums.end());
  for (int x = 0; x <= nums.size() - 4; x++) {
    if (x > 0 && nums[x] == nums[x - 1])
      continue;
    for (int i = x + 1; i <= nums.size() - 3; i++) {
      if (i > x + 1 && nums[i] == nums[i - 1])
        continue;
      int left = i + 1;
      int right = nums.size() - 1;
      while (left < right) {
        long long int sum = nums[x] + nums[i] + nums[left] + nums[right];
        if (sum == target) {
          ans.push_back({nums[x], nums[i], nums[left], nums[right]});
          left++;
          right--;
          while (left < right && nums[left] == nums[left - 1])
            left++;
          while (left < right && nums[right] == nums[right + 1])
            right--;
        } else if (sum > target)
          right--;
        else if (sum < target)
          left++;
      }
    }
  }
  return ans;
}

int main() {
  std::vector<int> nums = {-1, 2, 3, -4, 5, 6, 7, -4, -6, -2};
  std::vector<std::vector<int>> ans = fourSum(nums, 5);
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      std::cout << ans[i][j] << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
