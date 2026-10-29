class Solution {
public:
    bool isPalindrome(string s) {
  
     string g ="";
     for(int k = 0;k<s.size();k++){
        if(isalnum(s[k])){
            g += tolower(s[k]);
        }
     }
      int i = 0;
      int j = g.size()-1;
     
      while(i<=j){
      if(g[i]==g[j]){
        i++;
        j--;
      } else{
        return false;
      } 
      }
      return true;
    }
};
