class Solution {
   public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = 0;
        while(i >= 0 && j < n){
            if(nums1[i] > nums2[j]){
                swap(nums1[i],nums2[j]);
            }
            i--;
            j++;
        }
        sort(nums1.begin(),nums1.end() - (nums1.size() - m));
        sort(nums2.begin(),nums2.end());
        j = 0;
        for(int i = m ;i < nums1.size();i++){
            nums1[i] = nums2[j];
            j++;
        }
    }
};