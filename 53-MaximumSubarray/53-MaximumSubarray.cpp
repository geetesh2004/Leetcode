// Last updated: 9/5/2025, 9:00:24 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxi= LONG_MIN;
        int n=nums.size();
        long long sum=0;
        for(int i=0; i<n; i++){
            sum = sum+nums[i];

            if(sum>maxi){
                maxi=sum;
            }

            if(sum<0){
                sum=0;
            }
        }
        return maxi;


        
    }
};