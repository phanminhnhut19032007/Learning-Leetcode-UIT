class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       vector<int> tmp(nums.begin(),nums.end());
        sort(tmp.begin(),tmp.end());

        if(tmp[nums.size()-1]<2*tmp[nums.size()-2]) return -1;
        int max2 =tmp[nums.size()-1] ;

            for(int i = 0 ; i < nums.size();i++)
            {
              if(nums[i]>=max2) return i;
            }
        
        return -1;
        
    }
};