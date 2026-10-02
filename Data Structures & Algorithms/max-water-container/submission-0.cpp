class Solution {
public:
    int maxArea(vector<int>& heights) {
       int i = 0;
       int j = heights.size()-1;
       int maxarea = INT_MIN;
       while(i<j){
        if(heights[i]<=heights[j]){
           maxarea = max(maxarea,heights[i]*(j-i));
           i++;
        }else{
           maxarea = max(maxarea,heights[j]*(j-i));
           j--;
        }
       } 
       return maxarea;
    }
};
