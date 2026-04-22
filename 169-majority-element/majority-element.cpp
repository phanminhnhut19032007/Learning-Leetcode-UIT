class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
       multiset<int> tmp(nums.begin(),nums.end());
       set<int> tmp2(nums.begin(),nums.end());
       int n=0;
       int k=0;
       for(int x : tmp2)
       {
            int max=tmp.count(x);
            if(max>n)
            {
                n=max;
                k=x;
            }
       }
       return k;
    }
        
};