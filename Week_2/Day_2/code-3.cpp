// FIND ALL ANAGRAMS IN A STRING 

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> result;
        if (m > n) return result;
        vector<int> freqP(26, 0), freqS(26, 0);
        for(char c : p){
            freqP[c - 'a']++;
        }
        for(int i = 0; i < m; i++){
            freqS[s[i] - 'a']++;
        }
        if(freqS == freqP){
            result.push_back(0);
        }
        for(int i = m; i < n; i++){
            freqS[s[i] - 'a']++;       
            freqS[s[i - m] - 'a']--;   

            if(freqS == freqP){
                result.push_back(i - m + 1);
            }
        }
      return result;
    }
};
