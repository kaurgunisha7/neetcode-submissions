class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int maxlen = 0;
        unordered_map<char,int> hash;
        for(int j = 0;j < s.size();j++){
            if(hash.find(s[j]) != hash.end()){
                i = max(i , hash[s[j]] + 1);
            }
            hash[s[j]] = j;
            maxlen = max(maxlen , j - i + 1);
        }
        return maxlen;
    }
};
