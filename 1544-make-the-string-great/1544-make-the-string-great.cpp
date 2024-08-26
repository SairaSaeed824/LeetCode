class Solution {
public:
    string makeGood(string s) {
        vector<char>st;
        for(auto ch:s){
            if(!st.empty()&&abs(st.back()-ch)==32){
                st.pop_back();
            }else{
                st.push_back(ch);
            }
            
        }
        string ans(st.begin(),st.end());
        return ans;
    }
};