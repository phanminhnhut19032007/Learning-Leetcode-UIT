class Solution {
public:
    char findTheDifference(string s, string t) {
     multiset<char> ms_s(s.begin(), s.end());
    multiset<char> ms_t(t.begin(), t.end());
    
    vector<char> diff;
    set_difference(ms_t.begin(), ms_t.end(), ms_s.begin(), ms_s.end(), back_inserter(diff));
      return diff[0];
    }
};