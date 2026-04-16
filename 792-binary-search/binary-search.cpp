class Solution {
public:
    int search(vector<int>& nums, int target)
     {
        int left = 0 ;
        int right =nums.size()-1;
        int mid = left+(right-left)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target)
        {
          for(int i = 0 ; i<mid ;i++)
          {
            if(nums[i]==target) return i;
          }  
        }
        else
        {
        for(int i = mid+1; i<nums.size() ;i++)
          {
            if(nums[i]==target) return i;
          } 
        }
        return -1;
     }

    
};