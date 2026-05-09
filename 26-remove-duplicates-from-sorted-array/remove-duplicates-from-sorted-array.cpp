class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> nums1(nums.begin(),nums.end());
        vector<int> tmp(nums1.begin(),nums1.end());
        nums =tmp;
        return tmp.size();
    }
};