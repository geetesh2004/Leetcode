// Last updated: 9/5/2025, 9:00:12 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int el;
        for(int i=0; i<nums.size(); i++){
            
            if(count==0){
                count=1;
                el=nums[i];
            }
            else if(el==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==el){
                count1++;
            }
        }
        if(count1>nums.size()/2){
            return el;
        }
        return -1;
        
    }
};