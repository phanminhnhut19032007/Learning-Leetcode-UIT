class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0 ; i< nums1.size() ;i++)
        {
            int l = 0,r=nums2.size()-1;
            int target = nums1[i];
            while(l <=r)
            {
                int mid = (l+r)/2;
                if(nums2[mid]==target) return nums2[mid];
                else if(nums2[mid] > target) r = mid -1;
                else l = mid+1; 
            }
        }
        return -1;
    }
};