CONTAINS DUPLICATE

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        if(n==1) return false;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second>1){
                return true;
            }
        }
        return false;
    }
};
