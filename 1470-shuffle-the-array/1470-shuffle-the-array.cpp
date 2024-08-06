class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,0);
        int a=0;
        int b=n;
        for(int i=0;i<2*n;i+=2){
            ans[i]=nums[a++];
            ans[i+1]=nums[b++];
        }
        return ans;
        
    }
};