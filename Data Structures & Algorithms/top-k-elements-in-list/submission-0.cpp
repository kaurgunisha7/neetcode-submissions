class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(nums[i]) == hash.end()) {
                hash[nums[i]] = 1;
            } else {
                hash[nums[i]]++;
            }
        }
        while (k != 0) {
            int max_count = INT_MIN;
            int max_element = INT_MIN;
            for(auto &c : hash){
                if(c.second > max_count){
                    max_count = c.second;
                    max_element = c.first;
                }
            }
            ans.push_back(max_element);
            hash.erase(max_element);
            k--;
        }
        return ans;
    }
};
