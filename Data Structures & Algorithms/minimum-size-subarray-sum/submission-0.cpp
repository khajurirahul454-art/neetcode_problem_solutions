class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int subsum = 0;
        int l = 0;
        for(int r = 0;r<nums.size();r++){
            subsum += nums[r];
            while(subsum >= target){
                res = min(res,r-l+1);
                subsum -= nums[l];
                l++;
            }
        }
        if(res == INT_MAX){
            return 0;
        }
        return res;
    }
};