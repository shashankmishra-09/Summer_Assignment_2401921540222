// DAILY TEMPERATURE

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n , 0);
        if(n<2) return ans;
        vector<int> NGE = findNGE(temperatures);
        for(int i=0;i<n;i++){
            if(NGE[i]==-1){
                continue;
            }
            ans[i] = NGE[i] - i;
        }
        return ans;
    }
    vector<int> findNGE(vector<int>& temperatures){
        int n = temperatures.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = n-1 ; i>=0 ; i--){
            while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                st.pop();
            }
            ans[i] = !st.empty() ? st.top() : -1;
            st.push(i);
        }
        return ans;
    }
};
