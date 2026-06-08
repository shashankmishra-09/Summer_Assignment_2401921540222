MAXIMUM AVERAGE SUBARRAY 1

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()==1) return (double)nums[0];
        double avg = 0;
        double sum = 0;
        int left = 0;
        int right = k - 1;
        for(int i=left ; i<=right ; i++){
            sum = sum + nums[i];
        }
        avg = sum / k;
        double ans = avg;
        while(right < nums.size()-1){
            sum = sum - nums[left];
            left++;
            right++;
            sum = sum + nums[right];
            avg = sum / k;
            ans = max(ans , avg);
        }
        return ans;
    }
};
