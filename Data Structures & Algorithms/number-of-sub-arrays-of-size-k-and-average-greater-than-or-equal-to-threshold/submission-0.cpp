class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        for(int r = 0;r<=arr.size()-k;r++){
            int avg = 0;
            for(int g=r;g<r+k;g++){
                avg += arr[g];
            }
            if(avg/k >= threshold){
                count++;
            }
        } 
        return count;
    }
};