class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> hash;
        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            hash[s].push_back(strs[i]);
        }
        for (const auto& s1 : hash) {
            ans.push_back(s1.second);
        }
        return ans;
    }
};
