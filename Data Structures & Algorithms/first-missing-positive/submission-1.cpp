class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i = 0;i < nums.size();i++){
            if(nums[i] < 1 || nums[i] > nums.size()){
                nums[i] = nums.size() + 1;
            }
        }
        for(int i = 0;i < nums.size();i++){
            int val = abs(nums[i]);

            if (val <= nums.size()) {
                nums[val - 1] = -abs(nums[val - 1]);
            }
        }
        for(int i = 0;i < nums.size();i++){
            if(nums[i] > 0){
                return i+1;
            }
        }
        return nums.size() + 1;
    }
};