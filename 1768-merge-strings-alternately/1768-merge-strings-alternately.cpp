
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int n1 = word1.size();
        int n2 = word2.size();
        int i = 0, j = 0;
        
        // Merge characters alternately
        while (i < n1 && j < n2) {
            merged += word1[i++];
            merged += word2[j++];
        }
        
        // Append remaining characters from word1 if any
        while (i < n1) {
            merged += word1[i++];
        }
        
        // Append remaining characters from word2 if any
        while (j < n2) {
            merged += word2[j++];
        }
        
        return merged;
    }
};
