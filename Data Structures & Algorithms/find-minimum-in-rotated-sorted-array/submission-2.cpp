class Solution {
public:
    int findMin(vector<int> &nums) {
        int ans = nums[0];
        int i = 0;
        int j = nums.size()-1;
        while(i<=j){
            if(nums[i]<nums[j]){
                ans = min(ans,nums[i]);
                break;
            }
            int k = i + (j-i) / 2;
            ans = min(ans,nums[k]);
            if(nums[k]>=nums[i]){
               i = k+1;
            }else{
                j = k-1;
            }
        }
        return ans;
    }
};
