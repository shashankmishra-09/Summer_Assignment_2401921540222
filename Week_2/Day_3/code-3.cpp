// REPEATED SUBSTRING PATTERN 

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int len = 1; len <= n / 2; len++){
            if(n % len == 0){
                string pattern = s.substr(0, len);
                string build = "";
                for(int i = 0; i < n / len; i++){
                    build += pattern;
                }
                if(build == s) return true;
            }
        }
        return false;
    }
};
