class Solution {
public:
    int missingNumber(vector<int>& nums) {
      for (int i = 0; i < nums.size() - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[j] < nums[min])
				min = j;
		}
		swap(nums[i], nums[min]);
	}
      bool find =false;
      int tmp;
      int tmp2;
      for(int i = 0 ; i < nums.size();i++)
      {
        if(nums[i]!=i) 
        {
            find =true;
            tmp=i;
            break;
        }
        tmp2=i;
      }
      if(find) return tmp;
      else
      return tmp2+1;
    }
};