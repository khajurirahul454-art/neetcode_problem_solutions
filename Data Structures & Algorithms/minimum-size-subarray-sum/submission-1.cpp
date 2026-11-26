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
       return res == INT_MAX ? 0: res;
    }
};