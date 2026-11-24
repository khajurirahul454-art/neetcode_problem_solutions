class Solution {
public:
    int maxVowels(string s, int k) {
       int l = 0,res = 0, count = 0;
      unordered_set<char> v = {'a','e','i','o','u'};
      for(int r = 0;r<s.size();r++){
        if(v.find(s[r]) != v.end()){
            count++;
        }
        if(r-l+1>k){
            if(v.find(s[l]) != v.end()){
                count--;
            }
            l++;
        }
        res = max(res,count);
      }
      return res;
    }
};
