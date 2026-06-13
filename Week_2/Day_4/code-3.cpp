// GENERATE PARENTHESES

class Solution {
public:
    vector<string> generateParenthesis(int n) {
         vector<string> ans ;
        parenthesis(1,"",ans,0,0,n);
        return ans;
    }
    void parenthesis(int index,string s,vector<string>& ans,int opening,int closing,int n){
        if(opening>n) return;
        if(opening+closing==2*n && opening==closing){
            ans.push_back(s);
            return;
        }
        parenthesis(index+1,s+"(",ans,opening+1,closing,n);
        if(opening>closing){
        parenthesis(index+1,s+")",ans,opening,closing+1,n);
        }
    }
};
