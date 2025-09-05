// Last updated: 9/5/2025, 9:00:26 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= target) {
                return i;
            }
        }
        return nums.size(); // Insert at the end
    }
};
