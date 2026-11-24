class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      int l = 0,count = 0,pro = 1;
      for(int r = 0;r<nums.size();r++){
        pro *=nums[r];
        while(l<=r && pro >= k){
            pro /=nums[l];
            l++;
        }
       count += (r-l+1);
       
      }  
      return count;
    }
};