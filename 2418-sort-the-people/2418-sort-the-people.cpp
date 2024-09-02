class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>p;
        for(int i=0;i<names.size();i++){
            p.push_back({heights[i],names[i]});
        }
        sort(p.begin(),p.end(),greater<pair<int,string>>());
        vector<string>sortednames;
        for(auto &person:p){
            sortednames.push_back(person.second);
        }
        return sortednames;
        
    }
};

