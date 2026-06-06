#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans; // return immediately after finding the pair
                }
            }
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution obj;
    vector<int> result = obj.twoSum(nums, target);

    cout << "Indices: ";
    for (int index : result) {
        cout << index << " ";
    }

    return 0;
}