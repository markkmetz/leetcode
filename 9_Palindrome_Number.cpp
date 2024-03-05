class Solution {
public:
    bool isPalindrome(int x) {
        string s = std::to_string(x);
        for(int x = 0;x < s.length()/2;x++){
            if(s[x] != s[s.length()-x-1]){
                return false;
            }
        }
        return true;
        
    }
};