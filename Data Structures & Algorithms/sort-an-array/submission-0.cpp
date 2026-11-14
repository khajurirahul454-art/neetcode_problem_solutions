class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int>sorted;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i =0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        for(int j= 0;j<nums.size();j++){
            sorted.push_back(pq.top());
            pq.pop();
        }
        return sorted;
    }
};