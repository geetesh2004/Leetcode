// Last updated: 9/5/2025, 9:00:00 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                maximum=max(count,maximum);
            }
            else{
                count=0;
            }
        }
        return maximum;
        
    }
};