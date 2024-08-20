#include <vector>
class Solution{
    public:
int missingNumber(std::vector<int>& nums) {
    int n = nums.size();
    int total_sum = n * (n + 1) / 2;  // Sum of numbers from 0 to n
    int actual_sum = 0;
    
    // Calculate the sum of the elements in the array
    for (int num : nums) {
        actual_sum += num;
    }
    
    // The missing number is the difference between the expected sum and the actual sum
    return total_sum - actual_sum;
}
};