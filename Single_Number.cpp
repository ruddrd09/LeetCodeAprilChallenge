class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int z = 0;
        for(int i=0;i<nums.size();i++) {
            z ^= nums[i];
        }
        return z;
    }
};