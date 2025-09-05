// Last updated: 9/5/2025, 9:00:11 PM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // in case k > n
        
        vector<int> temp(k);
        
        // store last k elements
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }
        
        // shift first n-k elements to the right
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i - k];
        }
        
        // put temp elements in front
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};
