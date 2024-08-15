class Solution {
public:
    string reverseVowels(string s) {
       int left = 0;
    int right = s.length()- 1;

    while (left < right) {

        while (left < right && !isVowel(s[left])) {
            left++;
        }

        while (left < right && !isVowel(s[right])) {
            right--;
        }
       
        if (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
        return s;
 }
    
    bool isVowel(char ch) {
    
    const char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    
    for (int i = 0; i < 10; ++i) {
        if (ch == vowels[i]) {
            return true;
        }
    }
    return false;
}
};