// LARGEST RECTANGLE IN HISTOGRAM

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int nse;
        int pse;
        int area;
        int ans = 0;
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                int index = st.top();
                st.pop();
                pse = !st.empty() ? st.top() : -1 ;
                nse = i;
                area = heights[index]*(nse-pse-1);
                ans = max(area,ans);
            }
            st.push(i);
        }
        while(!st.empty()){
            nse = n;
            int index = st.top();
            st.pop();
            pse = !st.empty() ? st.top() : -1;
            area = heights[index]*(nse-pse-1);
            ans = max(ans,area);
        }
        return ans;
    }
};
