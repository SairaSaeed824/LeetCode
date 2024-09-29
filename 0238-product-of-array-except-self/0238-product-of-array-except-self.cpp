class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);
        
        // Create a running product from the left side
        int left_product = 1;
        for (int i = 0; i < n; i++) {
            output[i] = left_product;
            left_product *= nums[i];
        }
        
        // Create a running product from the right side
        int right_product = 1;
        for (int i = n - 1; i >= 0; i--) {
            output[i] *= right_product;
            right_product *= nums[i];
        }
        
        return output;
    }
};
