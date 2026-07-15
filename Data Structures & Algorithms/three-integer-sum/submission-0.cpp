class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int j = i + 1;
            int k = nums.size() - 1;
            int target = -nums[i];
            while (j < k) {
                if (nums[j] + nums[k] == target) {
                    if (find(ans.begin(), ans.end(), vector<int>{nums[i], nums[j], nums[k]}) == ans.end()) {
                        ans.push_back({nums[i], nums[j], nums[k]});
                    }
                    j++;
                } else if (nums[j] + nums[k] < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return ans;
    }
};
