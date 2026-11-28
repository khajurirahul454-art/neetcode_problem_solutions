class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
      sort(nums.begin(),nums.end());
      int mini = INT_MAX;
      for(int i = 0;i<=nums.size()-k;i++){
        int j = i+k-1;
        mini = min(mini,abs(nums[i]-nums[j]));
      }
      return mini == INT_MAX? 0: mini;
    }
};