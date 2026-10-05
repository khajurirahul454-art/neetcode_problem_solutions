class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = i+1;
        while(j<nums.size()-1){
            if(nums[i]==nums[j]){
                return nums[i];
            }else{
                i++;
                j++;
            }
        }
    }
};
