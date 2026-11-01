class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>ans;
       for(int i = 0;i<n+1;i++){
        int count =0;
        for(int j = 0;j<32;j++){
            if(i & (1<<j)){
                count += 1;
            }
        }
        ans.push_back(count);
       } 
       return ans;
    }
};
