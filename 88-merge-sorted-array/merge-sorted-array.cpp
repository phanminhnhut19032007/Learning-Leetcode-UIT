class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        if(m==0)
        {
            for(int i = 0 ; i < m+n ;i++)
            {
                nums1[i]=nums2[i];
            }
        }
    int i = 0;
    int j = 0;
    int l = 0;
    vector<int> tmp(nums1.begin()+0,nums1.begin()+m);
    while (i <tmp.size() && j < nums2.size())
    {
        if (tmp[i] <= nums2[j])
        {
            nums1[l] = tmp[i];
            l++;
            i++;
        }
        else
        {
            nums1[l] = nums2[j];
            l++;
            j++;
        }
    }
    while(i<tmp.size())
    {
        nums1[l]=tmp[i];
        l++;
        i++;
    }
    while(j<nums2.size())
    {
        nums1[l]=nums2[j];
        l++;
        j++;
    }
    }
 
    
};