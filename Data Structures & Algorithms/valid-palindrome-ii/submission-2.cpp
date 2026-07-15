class Solution {
   public:
    bool isPalindrome(string s, int i, int j) {
        while (i < j) {
            if (s[i] == s[j]) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string nums) {
        int i = 0;
        int j = nums.size() - 1;
        int flag = 0;
        while (i <= j) {
            if (nums[i] == nums[j]) {
                i++;
                j--;
            } else {
                return isPalindrome(nums, i + 1, j) || isPalindrome(nums, i, j - 1);
            }
        }
        return true;
    }
};