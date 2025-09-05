// Last updated: 9/5/2025, 9:00:04 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        int N=size;
        long long sum= (N*(N+1))/2;
        long sum2=0;
        for(int i=0;i<size;i++){
            sum2=sum2+nums[i];
        }
        int missing = sum-sum2;
        return missing;
        
    }
};