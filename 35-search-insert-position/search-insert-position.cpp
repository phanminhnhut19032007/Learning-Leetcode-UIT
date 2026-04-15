class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left =0;
        int right = nums.size();
        int mid = (left+right)/2;
        bool check =false;
        int tmp;
        if(target<=nums[mid])
        {
        
for(int i = 0 ;i<=mid;i++)
{  
     if(target<=nums[i])
     { 
           check = true;
           tmp=i;
           break;
     }
}

        }
        else
        {
              
 
for(int i =mid+1;i<nums.size();i++)
{  
     if(target<=nums[i])
     {  
           check = true;
           tmp=i;
           break;
     }
}
        }
if(check) return tmp;
else return nums.size();

        }


};