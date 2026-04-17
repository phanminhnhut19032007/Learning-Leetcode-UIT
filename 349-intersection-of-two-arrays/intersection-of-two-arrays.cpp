class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {

        vector<int> tmp;
        for(int i = 0 ; i< nums1.size();i++)
        {
    
            for(int j=0;j<nums2.size();j++)
            {
              if(nums1[i]==nums2[j])
              {
               tmp.push_back(nums1[i]);
               break;
              }
              
            }
          
        }
        set<int> a(tmp.begin(),tmp.end());
        vector<int> tmp2(a.begin(),a.end());
        return tmp2;

    }



};