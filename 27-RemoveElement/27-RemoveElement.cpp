// Last updated: 9/5/2025, 9:00:29 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Number of elements not equal to val

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
