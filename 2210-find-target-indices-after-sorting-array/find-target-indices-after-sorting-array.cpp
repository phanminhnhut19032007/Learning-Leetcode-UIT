class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        multiset<int> p(nums.begin(),nums.end());
        vector<int> k;
        int i=0;
        for(int x: p)
        {
            if(x== target)
            {
             k.push_back(i);
            }
            i++;
        }
        return k;
    }
};