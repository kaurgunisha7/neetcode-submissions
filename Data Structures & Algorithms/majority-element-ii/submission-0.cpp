class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> hash;
        int n = floor(nums.size() / 3);
        for(int i = 0;i < nums.size();i++){
            if(hash.find(nums[i]) == hash.end()){
                hash[nums[i]] = 1;
            }else{
                hash[nums[i]]++;
            }
        }
        for(auto &c : hash){
            if(c.second > n){
                ans.push_back(c.first);
            }
        }
        return ans;
    }
};