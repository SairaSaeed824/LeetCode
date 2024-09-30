class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int nm = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i = 0; i < nm; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1;
            int r = nm - 1;

            while (l < r) {
                int sum = nums[l] + nums[r] + nums[i];

                if (sum == 0) {
                    result.push_back({nums[i], nums[l], nums[r]});
                    l++, r--;

                    while (l < r && nums[l] == nums[l - 1])
                        l++;
                    while (l < r && nums[r] == nums[r + 1])
                        r--;
                } else if (sum < 0) {
                    l += 1;
                } else {
                    r -= 1;
                }
            }
        }

        return result;
    }
};