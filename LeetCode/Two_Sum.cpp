class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector <int> v;
    int flag = 1;
    for (int i=0; i<nums.size()-1; i++) {
      for (int j=i+1; j<nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          v.push_back(i);
          v.push_back(j);
          flag = 0;
          break;
        }
      }
      if (flag == 0)
        break;
    }
    return v;
  }
};
