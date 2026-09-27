class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int lef = i+1;
            int rig = n-1;
            while(lef<rig){
                int sum = nums[i] + nums[lef] +nums[rig];
                if(sum == 0){
                    v.push_back({nums[i],nums[lef],nums[rig]});
                while(lef<rig && nums[lef] == nums[lef+1]){
                    lef++;
                }while(rig>lef && nums[rig] == nums[rig-1]){
                    rig--;
                }
                lef++;
                rig--;
                }
                else if(sum<0){
                    lef++;
                }else{
                    rig--;
                }
            }
        }
        return v;
    }
};
