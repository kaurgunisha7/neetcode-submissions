class Solution {
public:
    int calPoints(vector<string>& operations) {
        int j = 0;
        vector<int> ans(operations.size());
        for(int i = 0;i < operations.size();i++){
            if(operations[i] == "+"){
                ans[j] = ans[j-1] + ans[j-2];
                j++;
            }else if(operations[i] == "D"){
                ans[j] = ans[j-1] * 2;
                j++;
            }else if(operations[i] == "C"){
                j--;
                ans[j] = 0;
            }else{
                ans[j] = stoi(operations[i]);
                j++;
            }
        }
        int sum = 0;
        for(int i = 0;i<ans.size();i++){
            sum += ans[i];
        }
        return sum;
    }
};