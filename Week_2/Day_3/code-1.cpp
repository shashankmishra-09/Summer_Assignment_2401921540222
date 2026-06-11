// FIND THE INDEX OF FIRST OCCURANCE IN A STRING 
class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;
        for(int i=0;i<haystack.size();i++){
            index = i;
            string ans = "";
            for(int j=i;j<haystack.size();j++){
                char ch = haystack[j];
                ans.push_back(ch);
                if(ans == needle) return index;
            }
        }
        return -1;
    }
};
