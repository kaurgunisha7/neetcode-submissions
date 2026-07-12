class Solution {
   public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = 1;
        while(j < nums.size()){
            if(nums[i] == val && nums[j] != val){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }else if(nums[i] == val){
                j++;
            }else{
                i++;
                j++;
            }
        }
        int k = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] != val) k++;
            else break;
        }
        return k;
    }
};