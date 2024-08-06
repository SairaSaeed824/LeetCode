class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> sum(gain.size(),0);
        int max=0;
        int currentSum=0;
        for(int i=0;i<gain.size();i++){
            currentSum=currentSum+gain[i];
            sum[i]=currentSum;
         if(max<sum[i]) {
             max=sum[i];
         }
        }
        return max;
        
    }
};