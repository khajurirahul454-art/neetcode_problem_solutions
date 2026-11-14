class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>mp;
       string st;
       for(char x:s){
        mp[x]++;
       } 
       priority_queue<pair<int,char>>pq;
       for(auto i:mp){
        pq.push({i.second,i.first});
       }
       while(!pq.empty()){
        int x = pq.top().first;
        while(x>0){
          st.push_back(pq.top().second);
          x--;
        }
        pq.pop();
       }
       return st;
    }
};