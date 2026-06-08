 // VALID ANAGRAM 

class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqs[26]={0};
        int freqt[26]={0};
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            freqs[s[i]-'a']+=1;
            freqt[t[i]-'a']+=1;
        }
        for(int i=0;i<26;i++){
            if(freqs[i]!=freqt[i]){
                return false;
            }
        }
        return true;
    }
};
