class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> res;
    unordered_map<int,int> mp;
    priority_queue<pair<int,int>> pq;
    for(int i:nums){
        mp[i]++;
    }
    for(auto j:mp){
        pq.push({j.second,j.first});
    }
    for(int i = 0;i<k;i++){
        res.push_back(pq.top().second);
        pq.pop();
    }
    return res;
    }  
};
