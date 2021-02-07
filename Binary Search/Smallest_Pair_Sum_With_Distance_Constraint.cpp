int solve(vector<int>& nums) {
  int left = INT_MAX, rhs = 2, ans = INT_MAX;
  while (rhs < nums.size()) {
      left = min(left, nums[rhs - 2]);
      ans = min(ans, nums[rhs] + left);
      ++rhs;
  }
  return ans;
}
