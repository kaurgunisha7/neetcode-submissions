class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hash;
        for (int i = 0; i < nums.size(); i++) {
            hash.insert(nums[i]);
        }
        int count = 0;
        int longest = 0;
        for(auto &c : hash){
            int curr = c;
            if(hash.find(curr - 1) != hash.end()){
                continue;
            }
            count++;
            while(hash.find(curr + 1) != hash.end()){
                count++;
                curr = curr + 1;
            }
            longest = max(longest , count);
            count = 0;
        }
        return longest;
    }
};
