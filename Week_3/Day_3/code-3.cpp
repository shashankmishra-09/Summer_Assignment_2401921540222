// NEXT GREATER ELEMENT 1 

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> NGE (nums1.size());
        unordered_map<int,int> mpp;
        for(int i=0;i<nums2.size();i++){
            mpp[nums2[i]] = i;
        }
        for(int i=0;i<nums1.size();i++){
            NGE[i] = findNGE(nums2 , mpp[nums1[i]]);
        }
        return NGE;
    }
    int findNGE(vector<int>& nums2 , int x){
        for(int i = x+1 ;i<nums2.size();i++){
            if(nums2[x]<nums2[i]){
                return nums2[i];
            }
        }
        return -1;
    }
};
