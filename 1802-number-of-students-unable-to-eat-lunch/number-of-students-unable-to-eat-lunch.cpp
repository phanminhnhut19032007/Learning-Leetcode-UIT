class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
         int count[2]={0,0};
         int n = students.size();
         for(int i = 0 ; i < n ;i++ )
         {
            if(students[i]==0)
            {
                count[0]++;
            }
            else
            count[1]++;
         }
         for(int i =0 ; i< n ;i++)
        {
            if(count[sandwiches[i]]==0)
            {
                return n-i;
            }
            count[sandwiches[i]]--;
        }


        return 0;
    }
};