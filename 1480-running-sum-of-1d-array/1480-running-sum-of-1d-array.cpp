class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum(nums.size()); 
        int original = 0; 
        
        for (int i = 0; i < nums.size(); i++) {
            original += nums[i]; 
            sum[i] = original; 
        }
        
        return sum; 
    }
};
