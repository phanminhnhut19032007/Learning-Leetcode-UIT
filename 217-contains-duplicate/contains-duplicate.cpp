class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        multiset<int> tmp(nums.begin(),nums.end());
        set<int> tmp2(nums.begin(),nums.end());
        int n = 0;
        for(int x : tmp2)
        {
            int max = tmp.count(x);
            if(max > n)
            {
                n =max;
            }
        }
        if(n == 1 ) return false;
        else return true;
    }
};