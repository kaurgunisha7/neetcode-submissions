class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int maxi = nums[i];
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == maxi)
                    count++;
                else
                    count--;
            }
            if (count > 0) return maxi;
        }
        return 0;
    }
};