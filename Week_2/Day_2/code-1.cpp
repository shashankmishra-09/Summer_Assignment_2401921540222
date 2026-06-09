// LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS 

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> mpp;
        int left = 0;
        int right = 0;
        int maxLength = 0;
        while(right < s.size()){
            if(mpp.find(s[right])==mpp.end()){
                mpp[s[right]] = right;
            }
            else{
                if(left > mpp[s[right]]){
                    mpp[s[right]] = right;
                }
                else{
                    left = mpp[s[right]] + 1;
                    mpp[s[right]] = right;
                }
            }
            maxLength = max(maxLength , right - left + 1);
            right++;
        }
        return maxLength;
    }
};
