class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        string first = strs[0];
        int i = 0;
        while(i < first.size()){
            for(int j = 1;j < strs.size();j++){
                if(first[i] == strs[j][i]){
                    continue;
                }else{
                    return ans;
                }
            }
            ans += first[i];
            i++;
        }
        return ans;
    }
};