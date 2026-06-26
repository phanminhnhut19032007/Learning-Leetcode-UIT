class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        QuickSort(nums,0,nums.size()-1);
        return nums;
    }
    void QuickSort(vector<int>  &nums,int l ,int r)
    {
        if(l>=r) return;
        int pivot=nums[(l+r)/2];
        int i = l , j =r;
        while(i<j)
        {
            while(nums[i] < pivot) i++;
            while(nums[j] > pivot) j--;
            if(i<=j){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        QuickSort(nums,l,j);
        QuickSort(nums,i,r);
    }
};