class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double ar=0;
        int maxsalary=salary[salary.size()-1];
        int minsalary=salary[0];
        int count=0;
       for(int i = 1 ; i< salary.size()-1;i++)
       {
        if(salary[i]!=minsalary && salary[i]!=maxsalary)
        {
            ar+=salary[i];
            count++;
        }
        else
        continue;
       }
       return ar/count;
    }
};