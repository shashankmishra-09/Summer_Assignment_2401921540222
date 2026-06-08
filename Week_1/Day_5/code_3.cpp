LONGEST COMMON PREFIX

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        int n = strs.size();
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[n-1];
        int mini = min(first.size() , last.size());
        string str = "";
        for(int i=0;i<mini ; i++){
            if(first[i]!=last[i]) return str;
            else str += first[i];
        }
        return str;
    }
};
