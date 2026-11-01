class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
      for(int i = 0;i<32;i++){
        int a_bit = (n>>i)&1;
        if(a_bit & 1){
            count += 1;
        }
      }
      return count;
    }
};
