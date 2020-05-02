class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1) {
            return nums[0];
        }
        
        int max_so_far = INT_MIN, max_ending_here = 0;
        int i = 0;
        while(i<nums.size()) {
            max_ending_here += nums[i];
            if(max_ending_here < nums[i]) {
                max_ending_here = nums[i];
            }
            if(max_ending_here > max_so_far) {
                max_so_far = max_ending_here;
            }
            i++;
        }
        return max_so_far;
    }
};