class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> v;
       unordered_map <string,int> mp;
       int j = 0;
       for(string i : strs){
        string a = i;
        sort(i.begin(),i.end());
        if(mp.find(i) != mp.end()){
            v[mp[i]].push_back(a);
        }else{
            mp[i] = j;
            v.push_back({});
            v[mp[i]].push_back(a);
            j++;
        }
       }
       return v; 
    }
};
