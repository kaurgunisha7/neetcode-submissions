class Solution {
   public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size() * 2, 0);
        int i = 0;
        int j = 0;
        while (j < ans.size()) {
            if (i == nums.size()) {
                i = 0;
            }
            ans[j] = nums[i];
            i++;
            j++;
        }
        return ans;
    }
};